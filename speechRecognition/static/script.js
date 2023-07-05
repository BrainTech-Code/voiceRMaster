// script.js
const startBtn = document.getElementById('startBtn');
const resultDiv = document.getElementById('result');

startBtn.addEventListener('click', function() {
    // Votre code pour démarrer l'enregistrement vocal et la reconnaissance
    // Ici, vous pouvez utiliser l'API Web Speech Recognition ou une autre bibliothèque de reconnaissance vocale.
    // Le résultat de la reconnaissance vocale peut être affiché dans la div "result".
    // Exemple :
    resultDiv.innerText = 'Enregistrement en cours...';
});


const fs = require('fs');
const { Readable } = require('stream');
const { spawn } = require('child_process');

function recordAudio(filePath, duration = 5) {
  const chunk = 1024;
  const sampleRate = 16000;

  const pyaudio = spawn('python', ['-u', '-']);

  const audioStream = new Readable();
  audioStream._read = () => {};

  pyaudio.stdout.on('data', (data) => {
    audioStream.push(data);
  });

  pyaudio.stderr.on('data', (data) => {
    console.error(data.toString());
  });

  pyaudio.on('close', () => {
    audioStream.push(null);
  });

  const pyCode = `
import pyaudio
import wave

chunk = ${chunk}
format = pyaudio.paInt16
channels = 1
sample_rate = ${sampleRate}
frames = []

audio = pyaudio.PyAudio()
stream = audio.open(format=format,
                    channels=channels,
                    rate=sample_rate,
                    input=True,
                    frames_per_buffer=chunk)

print("Enregistrement en cours...")

for _ in range(int(sample_rate / chunk * ${duration})):
    data = stream.read(chunk)
    frames.append(data)

print("Enregistrement terminé.")

stream.stop_stream()
stream.close()
audio.terminate()

wf = wave.open('${filePath}', 'wb')
wf.setnchannels(channels)
wf.setsampwidth(audio.get_sample_size(format))
wf.setframerate(sample_rate)
wf.writeframes(b''.join(frames))
wf.close()
    `;

  audioStream.pipe(pyaudio.stdin);
  pyaudio.stdin.end(pyCode);

  audioStream.on('end', () => {
    console.log('Enregistrement audio terminé.');
  });
}

console.log('Enregistrement audio...');
const recordedFilePath = './recorded.wav';
recordAudio(recordedFilePath);
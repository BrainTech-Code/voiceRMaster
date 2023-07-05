import pyaudio
import wave


def record_audio(file_path, duration=5):
    chunk = 1024
    format = pyaudio.paInt16
    channels = 1
    sample_rate = 16000
    audio = pyaudio.PyAudio()
    stream = audio.open(format=format,
                        channels=channels,
                        rate=sample_rate,
                        input=True,
                        frames_per_buffer=chunk)

    print("Enregistrement en cours...")

    frames = []

    for i in range(0, int(sample_rate / chunk * duration)):
        data = stream.read(chunk)
        frames.append(data)

    print("Enregistrement terminé.")

    stream.stop_stream()
    stream.close()
    audio.terminate()

    wf = wave.open(file_path, 'wb')
    wf.setnchannels(channels)
    wf.setsampwidth(audio.get_sample_size(format))
    wf.setframerate(sample_rate)
    wf.writeframes(b''.join(frames))
    wf.close()

#test
print('Enregistrement audio...')
recorded_file_path = "./recorded.wav"
record_audio(recorded_file_path)
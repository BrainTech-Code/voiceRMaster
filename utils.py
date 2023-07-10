import datetime
import os
import pyaudio
import tensorflow as tf
import numpy as np
import wave


class VoiceR:
    def __init__(self) -> None:
        self.model = self.load_model()
        self.labels = ["down", "go", "left", "no", "right", "stop", "up", "yes"]
        print("succes init:")

    def load_model(self):
        model_path = "voice3.h5"
        model = tf.keras.models.load_model(model_path)
        return model

    def process_audio(self, record):
        audio_bin = tf.io.read_file(record)
        audio, sample_rate = tf.audio.decode_wav(audio_bin)
        waveform = tf.squeeze(audio)
        waveform = waveform[:16000]
        zero_padding = tf.zeros([16000] - tf.shape(waveform), dtype=tf.float32)
        waveform = tf.cast(waveform, dtype=tf.float32)

        spectrogram = tf.signal.stft(signals=waveform, frame_length=255, frame_step=128)
        spectrogram = tf.abs(spectrogram)
        spectrogram = spectrogram[..., tf.newaxis]
        spectrogram = tf.expand_dims(spectrogram, axis=0)
        return spectrogram

    def make_prediction(self, audio_file):
        audio_data = self.process_audio(audio_file)
        prediction = self.model.predict(audio_data)
        # Trouver l'indice de la probabilité maximale
        predicted_index = np.argmax(prediction, axis=1)
        predicted_index = predicted_index[0]
        # Trouver la classe prédite en utilisant l'indice
        predicted_class = self.labels[predicted_index]
        return predicted_class

    def record_audio(self, duration=5, sample_rate=44100, channels=1):
        format = pyaudio.paInt16
        audio = pyaudio.PyAudio()
        stream = audio.open(
            format=format,
            channels=channels,
            rate=sample_rate,
            input=True,
            frames_per_buffer=1024,
        )

        print("Enregistrement audio en cours...")
        frames = []
        for i in range(0, int(sample_rate / 1024 * duration)):
            data = stream.read(1024)
            frames.append(data)

        print("Enregistrement audio terminé.")

        # Fermeture du flux audio
        stream.stop_stream()
        stream.close()
        audio.terminate()

        output_dir = "recording"
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)

        # Création du nom de fichier avec l'horodatage
        timestamp = datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
        output_file = os.path.join(output_dir, f"audio_{timestamp}.wav")

        # Sauvegarde de l'audio en tant que fichier WAV
        wave_file = wave.open(output_file, "wb")
        wave_file.setnchannels(channels)
        wave_file.setsampwidth(audio.get_sample_size(format))
        wave_file.setframerate(sample_rate)
        wave_file.writeframes(b"".join(frames))
        wave_file.close()
        print("Audio enregistré avec succès :", output_file)
        return output_file

    def play_audio(self, file_path):
        chunk = 1024  # Nombre d'échantillons lus à chaque fois
        # Ouvrir le fichier audio
        wf = wave.open(file_path, "rb")
        # Initialiser PyAudio
        p = pyaudio.PyAudio()
        # Ouvrir le flux de lecture
        stream = p.open(
            format=p.get_format_from_width(wf.getsampwidth()),
            channels=wf.getnchannels(),
            rate=wf.getframerate(),
            output=True,
        )
        # Lire les données du fichier audio par morceaux et les envoyer au flux de sortie
        data = wf.readframes(chunk)
        while data:
            stream.write(data)
            data = wf.readframes(chunk)

        # Arrêter le flux de sortie et fer


Voice = VoiceR()


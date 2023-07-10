import numpy as np
from scipy.io import wavfile
import tensorflow as tf
from tensorflow import keras
import pyaudio
import wave


def record_audio(output_file, duration=5, sample_rate=44100, channels=1):
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

    # Sauvegarde de l'audio en tant que fichier WAV
    wave_file = wave.open(output_file, "wb")
    wave_file.setnchannels(channels)
    wave_file.setsampwidth(audio.get_sample_size(format))
    wave_file.setframerate(sample_rate)
    wave_file.writeframes(b"".join(frames))
    wave_file.close()

    print("Audio enregistré avec succès : ", output_file)


# Enregistrement audio pendant 5 secondes et sauvegarde dans un fichier
output_file = "enregistrement_audio.wav"
record_audio(output_file, duration=5)
# Récupérer un fichier audio à partir d'un enregistrement audio


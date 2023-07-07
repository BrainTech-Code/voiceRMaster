import numpy as np
from scipy.io import wavfile
import tensorflow as tf
from tensorflow import keras
import pyaudio
import wave
import os
import datetime
import tkinter as tk
from PIL import ImageTk, Image
from utils import VoiceR


class VoiceView:
    def __init__(self):
        self.recording_audio = ""
        self.window = tk.Tk()
        self.window.title("Logiciel de Reconnaissance Vocal")
        self.window.geometry("600x600")

        self.label = tk.Label(
            self.window, text="Bienvenue sur VoiceR", padx=30, pady=30
        )
        self.label.grid(row=0, column=0)

        self.button = tk.Button(
            self.window,
            text="enregistrer audio",
            command=self.button_click,
            padx=10,
            pady=10,
        )
        self.button.grid(row=6, column=3)

        self.button_play = tk.Button(
            self.window, text="Play", command=self.play, padx=10, pady=10
        )
        self.button_play.grid(row=6, column=4)

        self.button_predict = tk.Button(
            self.window, text="Pred", command=self.predicted, padx=10, pady=10
        )
        self.button_predict.grid(row=6, column=5)

        self.label_result = tk.Label(
            self.window, text="resultat de prediction:", padx=20, pady=20
        )
        self.label_result.grid(row=2)

        self.window.grid_rowconfigure(0, minsize=50)
        self.window.grid_columnconfigure(0, minsize=50)

        self.voice_r = VoiceR()

    def button_click(self):
        self.label.config(text="Start recording...")
        self.recording_audio = self.voice_r.record_audio()
        self.label.config(text="succes recording")
        print(self.recording_audio)

    def play(self):
        self.label.config(text="stat playing")
        self.voice_r.play_audio(self.recording_audio)
        self.label.config(text="playing ...")

    def predicted(self):
        pred = self.voice_r.make_prediction(self.recording_audio)
        self.label_result.config(text="vous avez dit: " + pred)

    def run(self):
        self.window.mainloop()


# Exemple d'utilisation de la classe VoiceView
if __name__ == "__main__":
    voice_view = VoiceView()
    voice_view.run()

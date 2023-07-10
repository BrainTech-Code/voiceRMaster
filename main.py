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
        self.window.title("Logiciel de Reconnaissance Vocale")
        self.window.geometry("750x500")

        # Charger l'image de fond
        self.image = Image.open("microphone_image.jpg")
        self.background_image = None

        # Créer un widget Canvas pour afficher l'image de fond
        self.canvas = tk.Canvas(self.window, width=750, height=500)
        self.canvas.pack(fill="both", expand=True)

        self.voice_r = VoiceR()

        self.label = tk.Label(
            self.canvas,
            text="Bienvenue sur VoiceR",
            padx=30,
            pady=30,
            font=("Helvetica", 24),
            bg="white",  # Changer la couleur du fond du texte
        )
        self.label.pack(side="top", pady=(20, 10))

        self.label_result = tk.Label(
            self.canvas,
            text="Résultat de la prédiction:",
            padx=20,
            pady=20,
            font=("Helvetica", 16),
            bg="white",  # Changer la couleur du fond du texte
        )
        self.label_result.pack(side="bottom", pady=(10, 20))

        self.button = tk.Button(
            self.canvas,
            text="Enregistrer audio",
            command=self.button_click,
            padx=10,
            pady=10,
            font=("Helvetica", 14),
            bg="blue",  # Changer la couleur du bouton
            fg="white",  # Changer la couleur du texte du bouton
        )
        self.button.pack(side="left", padx=(20, 10))

        self.button_play = tk.Button(
            self.canvas,
            text="Play",
            command=self.play,
            padx=10,
            pady=10,
            font=("Helvetica", 14),
            bg="green",  # Changer la couleur du bouton
            fg="white",  # Changer la couleur du texte du bouton
        )
        self.button_play.pack(anchor="center", pady=10)

        self.button_predict = tk.Button(
            self.canvas,
            text="Prédire",
            command=self.predicted,
            padx=10,
            pady=10,
            font=("Helvetica", 14),
            bg="orange",  # Changer la couleur du bouton
            fg="white",  # Changer la couleur du texte du bouton
        )
        self.button_predict.pack(side="right", padx=(10, 20))

        self.window.bind("<Configure>", self.update_background)
        self.update_background(None)

        self.window.mainloop()

    def update_background(self, event):
        # Redimensionner l'image de fond en fonction de la taille de la fenêtre
        width = self.canvas.winfo_width()
        height = self.canvas.winfo_height()
        resized_image = self.image.resize((width, height), Image.LANCZOS)
        self.background_image = ImageTk.PhotoImage(resized_image)
        self.canvas.create_image(0, 0, anchor="nw", image=self.background_image)

    def button_click(self):
        self.label.config(text="Début de l'enregistrement...")
        self.recording_audio = self.voice_r.record_audio()
        self.label.config(text="Enregistrement réussi")
        print(self.recording_audio)

    def play(self):
        self.label_result.config(text="Lecture en cours...")
        self.voice_r.play_audio(self.recording_audio)
        self.label_result.config(text="Lecture terminée")

    def predicted(self):
        pred = self.voice_r.make_prediction(self.recording_audio)
        self.label_result.config(text="Vous avez dit: " + pred)

    def run(self):
        self.window.mainloop()


# Exemple d'utilisation de la classe VoiceView
if __name__ == "__main__":
    voice_view = VoiceView()
    voice_view.run()

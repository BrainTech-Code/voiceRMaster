import os
import pathlib
import tensorflow as tf

DATASET_PATH = "data/speech_commands"

data_dir = pathlib.Path(DATASET_PATH)
if not data_dir.exists():
    tf.keras.utils.get_file(
        "speech_commands.zip",
        origin="http://storage.googleapis.com/download.tensorflow.org/data/speech_commands.zip",
        extract=True,
        cache_dir=".",
        cache_subdir="data",
    )

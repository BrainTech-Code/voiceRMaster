import numpy as np
from keras.models import load_model
from flask import Flask, request, jsonify, make_response

# Charger le modèle entraîné
model = load_model('Model/model10.h5')  # Remplacez 'Model/model2.h5' par le chemin vers votre modèle sauvegardé

app = Flask(__name__)

# Configuration du répertoire de sauvegarde des fichiers
app.config['UPLOAD_FOLDER'] = 'file'


@app.route('/api/modele', methods=['POST'])

def predict():
    # Vérifier si un fichier audio a été envoyé dans la requête
    if 'audio' not in request.files:
        return jsonify(error='Aucun fichier audio n\'a été envoyé.')

    audio_file = request.files['audio']

    #Prediction du modele
    prediction = model(audio_file)

    #revoi de la prediction du modele
    response = {'mots': prediction}
    response = make_response(response)
    response.headers.add('Access-Control-Allow-Origin', '*')

    return response

if __name__ == '__main__':
    app.run(debug=True)

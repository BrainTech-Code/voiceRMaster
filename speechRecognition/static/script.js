// script.js
const startBtn = document.getElementById('startBtn');
const resultDiv = document.getElementById('result');

startBtn.addEventListener('click', function() {
    // Code pour démarrer l'enregistrement vocal
    // et envoyer les données au serveur pour reconnaissance
    // Ici, vous pouvez utiliser l'API Web Speech Recognition
    // ou toute autre bibliothèque de reconnaissance vocale
    // pour implémenter cette fonctionnalité.

    // Exemple avec l'API Web Speech Recognition
    const recognition = new webkitSpeechRecognition();
    recognition.lang = 'fr-FR';
    recognition.start();
    recognition.onresult = function(event) {
        const result = event.results[0][0].transcript;
        resultDiv.innerText = result;
    }
});
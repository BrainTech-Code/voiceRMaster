function recordAudio(duration = 5) {
    const chunk = 1024;
    const sampleRate = 16000;
    const audioChunks = [];
  
    navigator.mediaDevices.getUserMedia({ audio: true })
      .then((stream) => {
        const mediaRecorder = new MediaRecorder(stream);
  
        mediaRecorder.addEventListener('dataavailable', (event) => {
          if (event.data.size > 0) {
            audioChunks.push(event.data);
          }
        });
  
        mediaRecorder.addEventListener('stop', () => {
          const audioBlob = new Blob(audioChunks, { type: 'audio/wav' });
  
          const audioUrl = URL.createObjectURL(audioBlob);
          const audio = new Audio(audioUrl);
  
          // Exemple : joue l'audio enregistré
          audio.play();
  
          // Exemple : utilisez l'audioBlob selon vos besoins
          // Vous pouvez également l'envoyer au serveur via une requête AJAX
  
          // Réinitialisation pour une autre utilisation
          audioChunks.length = 0;
        });
  
        // Commence l'enregistrement pour la durée spécifiée
        mediaRecorder.start();
        setTimeout(() => {
          mediaRecorder.stop();
        }, duration * 1000);
      })
      .catch((error) => {
        console.error('Erreur lors de la récupération du flux audio :', error);
      });
  }
  
  console.log('Enregistrement audio...');
  recordAudio(5);
  
from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
""" def index(request):
    return render(request,'interface.html')

from django.shortcuts import render """
def index(request):
    if request.method == 'POST':
        recorded_file = request.FILES['recordedFile']
        # Effectuer les opérations souhaitées avec le fichier enregistré
        # par exemple, le sauvegarder sur le disque :
        with open('chemin/vers/dossier/destination/recorded.wav', 'wb') as destination:
            for chunk in recorded_file.chunks():
                destination.write(chunk)
        # Autres opérations à effectuer

    return render(request, 'interface.html')

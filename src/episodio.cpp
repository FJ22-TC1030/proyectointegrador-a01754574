// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "episodio.h"
#include <iostream>
#include <string>

using namespace std;


Episodio::Episodio() : Video(),
    numEpisodio(0), temporada(0)  {
}


    // string Nombre_video, string ID_video, string fecha_Estreno, float calif_video, int duracion_video)
Episodio::Episodio(string id_Episodio, string Nombre_episodio, int num_Episodio, int temporada_new, 
    string fecha_estreno, int calificacion_Ep,  float duracionEp) :
    Video(Nombre_episodio, id_Episodio, fecha_estreno, calificacion_Ep, duracionEp),
        numEpisodio(num_Episodio), temporada(temporada_new) 
     {}

string Episodio::getIdEpisodio() {return getIDVideo();}

string Episodio::getNombre_episodio() {return getNombreVideo();}

int Episodio::getNumEpisodio() {return numEpisodio;}

int Episodio::getTemporada() {return temporada;}

string Episodio::getFecha_estreno() {return getFechaEstreno();}

int Episodio::getCalificacionEp() {return getCalifVideo();}

void Episodio::setCalifEpisodio(float newCalifEp) {setCalifVideo(newCalifEp);}
// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "episodio.h"
#include <iostream>
#include <string>

using namespace std;


Episodio::Episodio() {

    idEpisodio = "000";
    Nombreepisodio = "S/t";
    numEpisodio = 0;
    temporada = 0;
    fechaestreno = "00/00/00";
    calificacionEp = 0;

}


    
Episodio::Episodio(string id_Episodio, string Nombre_episodio, int num_Episodio, int temporada_new, 
    string fecha_estreno, int calificacion_Ep) {

    idEpisodio = id_Episodio;
    Nombreepisodio = Nombre_episodio;
    numEpisodio = num_Episodio;
    temporada = temporada_new;
    fechaestreno = fecha_estreno;
    calificacionEp = calificacion_Ep;

}

string Episodio::getIdEpisodio() {return idEpisodio;}

string Episodio::getNombre_episodio() {return Nombreepisodio;}

int Episodio::getNumEpisodio() {return numEpisodio;}

int Episodio::getTemporada() {return temporada;}

string Episodio::getFecha_estreno() {return fechaestreno;}

int Episodio::getCalificacionEp() {return calificacionEp;}

void Episodio::setCalifEpisodio(float newCalifEp) {calificacionEp = newCalifEp;}
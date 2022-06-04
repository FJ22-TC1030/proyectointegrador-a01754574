#include "episodio.h"
#include <iostream>
#include <string>

using namespace std;


Episodio::Episodio() {}
    
Episodio::Episodio(
    string idEpisodio, string Nombre_episodio, int numEpisodio, int temporada, 
    string fecha_estreno, int calificacionEp) {}

string Episodio::getIdEpisodio() {return idEpisodio;}

string Episodio::getNombre_episodio() {return Nombre_episodio;}

int Episodio::getNumEpisodio() {return numEpisodio;}

int Episodio::getTemporada() {return temporada;}

string Episodio::getFecha_estreno() {return fecha_estreno;}

int Episodio::getCalificacionEp() {return calificacionEp;}

void Episodio::setCalifEpisodio(float newCalifEp) {calificacionEp = newCalifEp;}
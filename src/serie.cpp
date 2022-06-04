#include "serie.h"
#include <iostream>
#include <string>

using namespace std;

Serie::Serie() {}
        
Serie::Serie(Episodio episodio, string idSerie, string nombreSerie, string generoSerie, int duracionSerie, int calificacionSer){}
        
vector<Episodio> Serie::getEpisodio() {return episodio;}
        
string Serie::getIdSerie() {return idSerie;}
        
string Serie::getNombreSerie() {return nombreSerie;}
        
vector<string> Serie::getGeneroSerie() {return generoSerie;}
        
int Serie::getDuracionSerie() {return duracionSerie;}

void Serie::setCalifSerie(float newCalifSerie) {calificacionSer = newCalifSerie;}
// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "serie.h"
#include <iostream>
#include <string>

using namespace std;

Serie::Serie() {

    

    idSerie = "000";
    nombreSerie = "S/T";
    generoSerie = "S/G";
    duracionSerie = 0;
    calificacionSer = 0;

}
        
Serie::Serie( string id_Serie, string nombre_Serie, string genero_Serie, 
    int duracion_Serie, int calificacion_Ser) {

    idSerie = id_Serie;
    nombreSerie = nombre_Serie;
    generoSerie = genero_Serie;
    duracionSerie = duracion_Serie;
    calificacionSer = calificacion_Ser;
}
        
vector<Episodio> Serie::getEpisodio() {return episodios;}
        
string Serie::getIdSerie() {return idSerie;}
        
string Serie::getNombreSerie() {return nombreSerie;}
        
string Serie::getGeneroSerie() {return generoSerie;}
        
int Serie::getDuracionSerie() {return duracionSerie;}

int Serie::getCalificacionSer() {return calificacionSer;}

void Serie::imprimir() {
    for (int i = 0; i < episodios.size(); i++) {
        cout << "Nombre Ep: " << episodios[i].getNombre_episodio() << endl;
        cout << "Id Ep: " << episodios[i].getIdEpisodio() << endl;
        cout << "Numero Ep: " << episodios[i].getNumEpisodio() << endl;
        cout << "Temporada: " << episodios[i].getTemporada() << endl;
        
    }
    
}

void Serie::agregarEpisodio(Episodio episodio1) {

    episodios.push_back(episodio1);
}

void Serie::setCalifSerie(float newCalifSerie) {calificacionSer = newCalifSerie;}
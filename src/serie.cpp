#include "serie.h"
#include <iostream>
#include <string>

using namespace std;

Serie::Serie() {

    vector<Episodio> eps;
    episodios = eps;

    idSerie = "000";
    nombreSerie = "S/T";

    vector<string> Gen2;
    generoSerie = Gen2;

    duracionSerie = 0;
    calificacionSer = 0;

}
        
Serie::Serie(vector<Episodio> episodio_new, string id_Serie, string nombre_Serie, vector<string> genero_Serie, 
    int duracion_Serie, int calificacion_Ser) {

    episodios = episodio_new;
    idSerie = id_Serie;
    nombreSerie = nombre_Serie;
    generoSerie = genero_Serie;
    duracionSerie = duracion_Serie;
    calificacionSer = calificacion_Ser;
}
        
vector<Episodio> Serie::getEpisodio() {return episodios;}
        
string Serie::getIdSerie() {return idSerie;}
        
string Serie::getNombreSerie() {return nombreSerie;}
        
vector<string> Serie::getGeneroSerie() {return generoSerie;}
        
int Serie::getDuracionSerie() {return duracionSerie;}

void Serie::imprimir() {
    for (int i = 0; i < episodios.size(); i++) {
        cout << "Nombre Ep: " << episodios[i].getNombre_episodio() << endl;
    }
    
}

void Serie::setCalifSerie(float newCalifSerie) {calificacionSer = newCalifSerie;}
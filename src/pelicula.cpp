// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "pelicula.h"
#include "video.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector> 

using namespace std;

Pelicula::Pelicula() : Video(), generoPelicula("S/G") {}

Pelicula::Pelicula(string _ID, string _nombre, int _duracion, string _genero, float _calif, string _fechaEstreno):
    video(_ID, _nombre, _duracion, _genero, _calif) {
        generoPelicula = _genero;
}

string Pelicula::getGeneroPelicula() {return generoPelicula;}

void Pelicula::cambiarCalif(float califP) {
    setCalifVideo(califP);
}

void Pelicula::imprimir() {
    Video::imprimir();
    
    cout << "\n*Peliculas*" << endl;
    cout << "Genero Peliculas: " << generoPelicula;
}

bool Pelicula::operator >= (float cal) {
    
    if(getCalifVideo() >= cal) {
        return true;
    } else {
        return false;
    }

}

bool Pelicula::operator == (string gen) {
    
    stringstream token(generoPelicula);
    string gen1, gen2, gen3, gen4, gen5, gen6;

    getline(token, gen1, '/');
    getline(token, gen2, '/');
    getline(token, gen3, '/');
    getline(token, gen4, '/');
    getline(token, gen5, '/');
    getline(token, gen6, '/');

    if(gen1 == generoPelicula | gen2 == generoPelicula | gen3 == generoPelicula | 
    gen4 == generoPelicula | gen5 == generoPelicula | gen6 == generoPelicula) {
        return true;
    } else {
        return false;
    }
}

void Pelicula::cambiarCalif(float califP) {
    setCalifVideo(califP);
}


        

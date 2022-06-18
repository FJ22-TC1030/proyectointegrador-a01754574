// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "pelicula.h"
#include <iostream>
#include <string>
#include <vector> 
#include <fstream>
#include <sstream>


using namespace std;


Pelicula::Pelicula(){}
// string Nombre_video, string ID_video, string fecha_Estreno, float calif_video, int duracion_video

Pelicula::Pelicula(string ID_, string Nom, int duracion_, string fechaEstreno_, string genero_, float calif_): Video(ID_,Nom,duracion_,fechaEstreno_, calif_) {
    generoPelicula = genero_;
}
        
string Pelicula::getGeneroPelicula() {return generoPelicula;}


void Pelicula::imprimir() {
    
    Video::imprimir();
    cout << "\n*PELICULA*" << endl;
    cout << "Genero Pelicula: " << generoPelicula;
}

bool Pelicula::operator>=(float cal){
    
    if (getCalifVideo() >= cal) { return true;} 
    else {return false;}
}

bool Pelicula::operator==(string gen){
    
    stringstream token(generoPelicula);
    string gen1, gen2, gen3, gen4, gen5, gen6;
    getline(token, gen1, '/');
    getline(token, gen2, '/');
    getline(token, gen3, '/');
    getline(token, gen4, '/');
    getline(token, gen5, '/');
    getline(token, gen6, '/');
    
    if (generoPelicula == gen1 | generoPelicula == gen2 | generoPelicula == gen3 | generoPelicula == gen4 | generoPelicula == gen5 | generoPelicula == gen6){
        return true;
    } else {
        return false;
    }
}

void Pelicula::calif_cambio(float num){
    setCalifVideo(num);
}


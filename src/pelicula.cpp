#include "pelicula.h"
#include <iostream>
#include <string>
#include <vector> 

using namespace std;

Pelicula::Pelicula() {

    idPelicula = "000";

    NombrePelicula = "S/T";

    vector<string>gen;

    generoPelicula = gen;

    duracionPelicula = 0;

    calificacion = 0;

    FechaEstreno = "00/00/00";


}

Pelicula::Pelicula(string id_Pelicula, string Nombre_Pelicula, vector<string> genero_Pelicula, int duracion_Pelicula,
    float calificacion_new, string Fecha_Estreno) {

    idPelicula = id_Pelicula; 

    NombrePelicula = Nombre_Pelicula;

    vector<string>gen;

    generoPelicula = genero_Pelicula;

    duracionPelicula = duracion_Pelicula;

    calificacion = calificacion_new;

    FechaEstreno = Fecha_Estreno;  

}
        
string Pelicula::getIDPelicula() {return idPelicula;}

string Pelicula::getNombrePelicula() {return NombrePelicula;}

vector<string> Pelicula::getGeneroPelicula() {return generoPelicula;}

int Pelicula::getDuracionPelicula() {return duracionPelicula;}

float Pelicula::getCalificacion() {return calificacion;}

string Pelicula::getFechaEstreno(){return FechaEstreno;}

void Pelicula::setCalifPelicula(float newCalif){calificacion = newCalif;}
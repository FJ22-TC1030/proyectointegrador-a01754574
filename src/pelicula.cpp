#include "pelicula.h"
#include <iostream>
#include <string>
#include <vector> 

Pelicula::Pelicula() {}

Pelicula::Pelicula(string idPelicula, string NombrePelicula, string generoPelicula, int duracionPelicula,
          float calificacion, string FechaEstreno) {}
        
string Pelicula::getIDPelicula() {return idPelicula;}

string Pelicula::getNombrePelicula() {return NombrePelicula;}

vector<string> Pelicula::getGeneroPelicula() {return generoPelicula;}

int Pelicula::getDuracionPelicula() {return duracionPelicula;}

float Pelicula::getCalificacion() {return calificacion;}

string Pelicula::getFechaEstreno(){return FechaEstreno;}

void Pelicula::setCalifPelicula(float newCalif){calificacion = newCalif;}
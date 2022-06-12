// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "pelicula.h"
#include <iostream>
#include <string>
#include <vector> 


using namespace std;

Pelicula::Pelicula() : Video(), generoPelicula("S/G") {}

// string Nombre_video, string ID_video, string fecha_Estreno, float calif_video, int duracion_video
Pelicula::Pelicula(string Nombre_Pelicula, string ID_Pelicula, string fecha_Pelicula, float calif_Pelicula, int duracion_Pelicula, string genero_Pelicula)
: Video(Nombre_Pelicula, ID_Pelicula,  fecha_Pelicula, calif_Pelicula, duracion_Pelicula),
generoPelicula(genero_Pelicula) { }
        
string Pelicula::getIDPelicula() {return getIDVideo();}

string Pelicula::getNombrePelicula() {return getNombreVideo();}

string Pelicula::getGeneroPelicula() {return generoPelicula;}

int Pelicula::getDuracionPelicula() {return getDuracionVideo();}

float Pelicula::getCalificacion() {return getCalifVideo();}

string Pelicula::getFechaEstreno(){return getFechaEstreno();}

void Pelicula::setCalifPelicula(float newCalif){setCalifVideo(newCalif);}
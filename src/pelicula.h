// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef PELICULA_H
#define PELICULA_H

#pragma once
#include "video.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Pelicula: public Video {

    private:
        string generoPelicula;
    
    public:
        Pelicula();
        Pelicula(string Nombre_Pelicula, string ID_Pelicula, string fecha_Pelicula, float calif_Pelicula, int duracion_Pelicula, string genero_Pelicula);
        
        string getIDPelicula();
        string getNombrePelicula();
        string getGeneroPelicula();
        int getDuracionPelicula();
        float getCalificacion();
        string getFechaEstreno();

        void setCalifPelicula(float newCalif);
};

#endif
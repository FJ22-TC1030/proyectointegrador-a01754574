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
        string idPelicula;
        string NombrePelicula;
        string generoPelicula;
        int duracionPelicula;
        float calificacion;
        string FechaEstreno;
    
    public:
        Pelicula();
        Pelicula(string id_Pelicula, string Nombre_Pelicula, string genero_Pelicula, int duracion_Pelicula,
        float calificacion_new, string Fecha_Estreno);
        
        string getIDPelicula();
        string getNombrePelicula();
        string getGeneroPelicula();
        int getDuracionPelicula();
        float getCalificacion();
        string getFechaEstreno();

        void setCalifPelicula(float newCalif);
};

#endif
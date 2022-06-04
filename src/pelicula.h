#ifndef PELICULA_H
#define PELICULA_H

#pragma once
#include "video.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pelicula {

    private:
        string idPelicula;
        string NombrePelicula;
        vector<string> generoPelicula;
        int duracionPelicula;
        float calificacion;
        string FechaEstreno;
    
    public:
        Pelicula();
        Pelicula(string idPelicula, string NombrePelicula, string generoPelicula, int duracionPelicula,
        float calificacion, string FechaEstreno);
        
        string getIDPelicula();
        string getNombrePelicula();
        vector<string> getGeneroPelicula();
        int getDuracionPelicula();
        float getCalificacion();
        string getFechaEstreno();

        void setCalifPelicula(float newCalif);
};

#endif
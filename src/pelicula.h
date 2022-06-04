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
        vector<string> generoPelicula;
        int duracionPelicula;
        float calificacion;
        string FechaEstreno;
    
    public:
        Pelicula();
        Pelicula(string id_Pelicula, string Nombre_Pelicula, vector<string> genero_Pelicula, int duracion_Pelicula,
        float calificacion_new, string Fecha_Estreno);
        
        string getIDPelicula();
        string getNombrePelicula();
        vector<string> getGeneroPelicula();
        int getDuracionPelicula();
        float getCalificacion();
        string getFechaEstreno();

        void setCalifPelicula(float newCalif);
};

#endif
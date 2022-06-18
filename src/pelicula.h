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
        Pelicula(string _ID, string _nombre, int _duracion, string _genero, float _calif, string _fechaEstreno);
        
        string getGeneroPelicula();
        void cambiarCalif(float califP);
        
        void imprimir();

        bool operator >= (float cal);
        bool operator == (string gen);
};

#endif
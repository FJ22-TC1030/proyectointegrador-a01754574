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
        Pelicula(string ID_, string Nom, int duracion_, string genero_, string fechaEstreno_, float calif_);
        
       string getGeneroPelicula();
       void calif_cambio(float calif_P);
       void imprimir();
       
       bool operator >= (float cal); 
       bool operator == (string gen);
      
};

#endif
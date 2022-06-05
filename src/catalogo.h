// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef CATALOGO_H
#define CATALOGO_H

#pragma once
#include "pelicula.h"
#include "serie.h"
#include <iostream>
#include <vector>

using namespace std;

class Catalogo {

    private:
        vector<Pelicula> pelicula;
        vector<Serie> serie;
    
    public:
        Catalogo();
        Catalogo(vector<Pelicula> pels, vector<Serie> sre);

        void cargarArchivo();
        void mostrarCatalogo();
        void mostrarPeliculas();
        void mostrarSeries();
        void agregarSeries();
        
        void agregarPeliculas(Pelicula Pelicula1);
        void agregarSeries(Serie Serie1); 


};

#endif
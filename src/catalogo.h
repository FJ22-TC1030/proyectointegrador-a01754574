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
};

#endif
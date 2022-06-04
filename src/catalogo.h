#pragma once
#include <pelicula.h>
#include <serie.h>
#include <iostream>
#include <vector>

using namespace std;

class Catalogo {

    private:
        vector<Pelicula> pelicula;
        vector<Serie> serie;
    
    public:
        Catalogo();
        
        void mostrarCatalogo();
        void mostrarPeliculas();
        void mostrarSeries();
};
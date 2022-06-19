// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef CATALOGO_H
#define CATALOGO_H

#pragma once 
#include <iostream>
#include <string>
#include <vector>
#include "serie.h"
#include "Pelicula.h"
#include <string>
#include <strstream>

using namespace std;


class Catalogo {
   
    private:
        vector<Serie> series;
        vector<Pelicula> peliculas;

    public:
        void Series(Serie ser);
        void Peliculas(Pelicula peli);
        void setCalif(int calif, string vari);
        void imprimir();
        void cargarCatalogo();

        void calificar(float calificacion);

        void generos(string gen);

        void encuentraSerie(string serie);

        void clas_cali(float clas);

        void calificarVideo(string video, float cali);
};

#endif
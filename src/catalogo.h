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
        void agregarSerie(Serie ser);
        void agregarPelicula(Pelicula peli);
        void setCalificacion(int calif, string vari);
        void imprimir();
        void leerCatalogo();

        void califVideos(float calif); // opciÃ³n 2.1

        void clasificar_generos(string gen);

        void buscaSerie(string serie);

        void clasificarP_cali(float c);

        void calificarVideo(string video, float cali);
};

#endif
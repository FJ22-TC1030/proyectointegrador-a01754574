// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef SERIE_H
#define SERIE_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "episodio.h"

using namespace std;

class Serie {

    private:
        vector<Episodio> episodios;
        string nombre_Serie;
        string id_Serie;
        string genero_Serie;

    public:
        Serie();
        Serie(string id_Serie, string nombre_Serie, string genero_Serie);
        string getIdSerie();
        string getNombreSerie();
        string getGeneroSerie();
        void agregarEpisodio(Episodio episode);
        void imprimir();

        bool operator >= (float cal); 
        void imprimir(float cal);

        void buscarEpisodio(string nombre, float c);

        bool operator == (string gen);
};
#endif
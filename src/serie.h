// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef SERIE_H
#define SERIE_H

#pragma once
#include "episodio.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Serie {

    private:
        vector<Episodio> episodios;
        string IDSerie, nombreSerie, generoSerie;
    
    public:
        Serie();
        Serie(string _IDSerie, string _nombreSerie, string _generoSerie);

        string getIdSerie();
        string getNombreSerie();
        string getGeneroSerie();
        
        void agregarEpisodio(Episodio _episodio);
        void buscarEpisodio(string nombre, float c);

        void imprimir();

        bool operator == (string gen);



};

#endif
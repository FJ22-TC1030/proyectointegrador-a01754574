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
        string idSerie;
        string nombreSerie;
        string generoSerie;
        int duracionSerie;
        int calificacionSer;
    
    public:
        Serie();
        Serie(string id_Serie, string nombre_Serie, string genero_Serie, 
        int duracion_Serie, int calificacion_Ser);
        vector<Episodio> getEpisodio();
        string getIdSerie();
        string getNombreSerie();
        string getGeneroSerie();
        int getDuracionSerie();
        int getCalificacionSer();
        void imprimir();

        void agregarEpisodio(Episodio episodio1);

        void setCalifSerie(float newCalifSerie);


};

#endif
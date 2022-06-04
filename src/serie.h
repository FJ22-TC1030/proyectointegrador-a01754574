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
        vector<string> generoSerie;
        int duracionSerie;
        int calificacionSer;
    
    public:
        Serie();
        Serie(vector<Episodio> episodio_new, string id_Serie, string nombre_Serie, vector<string>genero_Serie, 
        int duracion_Serie, int calificacion_Ser);
        vector<Episodio> getEpisodio();
        string getIdSerie();
        string getNombreSerie();
        vector<string> getGeneroSerie();
        int getDuracionSerie();
        void imprimir();

        void setCalifSerie(float newCalifSerie);
};

#endif
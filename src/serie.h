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
        vector<Episodio> episodio;
        string idSerie;
        string nombreSerie;
        vector<string> generoSerie;
        int duracionSerie;
        int calificacionSer;
    
    public:
        Serie();
        Serie(Episodio episodio, string idSerie, string nombreSerie, string generoSerie, int duracionSerie, int calificacionSer);
        vector<Episodio> getEpisodio();
        string getIdSerie();
        string getNombreSerie();
        vector<string> getGeneroSerie();
        int getDuracionSerie();

        void setCalifSerie(float newCalifSerie);
};

#endif
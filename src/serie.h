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
    
    public:
        Serie();

        vector<Episodio> getEpisodio();
        string getIDSerie();
        string getNombreSerie();
        vector<string> getGeneroSerie();
        int getDuracionSerie();

        void setCalifSerie(float newCalifSerie);
};
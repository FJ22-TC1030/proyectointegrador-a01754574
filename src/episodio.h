#ifndef EPISODIO_H
#define EPISODIO_H

#pragma once
#include "video.h"
#include <iostream>
#include <string>

using namespace std;

class Episodio {

    private:
        string idEpisodio;
        int numEpisodio;
        int temporada;
        string Nombre_episodio;
    
    public:
        Episodio();
        Episodio(string NewIdEp, int NewNumEp, int newTemEp, string newNomEp);

        string getIDEpisodio();
        int getNumeroEpisodio();

        void setCalifEpisodio(float newCalifEp);
};

#endif
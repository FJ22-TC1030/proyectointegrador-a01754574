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
        string Nombre_episodio;
        int numEpisodio;
        int temporada;
        string fecha_estreno;
        int calificacionEp;
        
    
    public:
        Episodio();
        Episodio(string idEpisodio, string Nombre_episodio, int numEpisodio, int temporada, 
        string fecha_estreno, int calificacionEp);

        string getIdEpisodio();
        string getNombre_episodio();
        int getNumEpisodio();
        int getTemporada();
        string getFecha_estreno();
        int getCalificacionEp();

        void setCalifEpisodio(float newCalifEp);
};

#endif
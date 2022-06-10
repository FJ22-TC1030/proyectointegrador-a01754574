// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef EPISODIO_H
#define EPISODIO_H

#pragma once
#include "video.h"
#include <iostream>
#include <string>


using namespace std;

class Episodio: public Video {

    private:
        string idEpisodio;
        string Nombreepisodio;
        int numEpisodio;
        int temporada;
        string fechaestreno;
        int calificacionEp;
        
    public:
        Episodio();
        Episodio(string id_Episodio, string Nombre_episodio, int num_Episodio, int temporada_new, 
        string fecha_estreno, int calificacion_Ep);

        string getIdEpisodio();
        string getNombre_episodio();
        int getNumEpisodio();
        int getTemporada();
        string getFecha_estreno();
        int getCalificacionEp();

        void setCalifEpisodio(float newCalifEp);
};


#endif
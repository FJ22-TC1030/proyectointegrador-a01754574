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
        int numEpisodio;
        int temporada;
        
    public:
        Episodio();
        Episodio(string ID_, string Nom, int duracion_, string fechaEstreno_, float calif_, int num_ep, int temp) : Video(ID_,Nom,duracion_,fechaEstreno_, calif_){}

        
        int getNumEpisodio();
        int getTemporada();
        void calific_cambio(float cali);
        void imprimir();
        bool operator>=(float cal);
        
};

#endif
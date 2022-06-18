// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef VIDEO_H
#define VIDEO_H

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Video {

    private:
        string Nombre;
        string ID;
        string fechaEstreno;
        float calif;
        int duracion;


    public:
        Video();
        Video(string ID_, string Nom, int duracion_, string fechaEstreno_, int calif_);

        string getNombreVideo();
        string getIDVideo();
        string getFechaEstreno();
        int getDuracionVideo();
        float getCalifVideo();
        void setCalifVideo(float NewCalif);
        void imprimir();
};
#endif
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
        string ID, nombre, fechaEstreno;
        float calif;
        int duracion;

    public:
        Video();
        Video(string _ID, string _nombre, string _fechaEstreno, float _calif, int _duracion);

        string getIDVideo();
        string getNombreVideo();
        string getFechaEstreno();
        int getDuracionVideo();
        float getCalifVideo();
        void setCalifVideo(float NewCalif);

        void imprimir();
        
};

#endif
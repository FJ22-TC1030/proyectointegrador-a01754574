// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#ifndef VIDEO_H
#define VIDEO_H

#pragma once
#include <iostream>
#include <iostream>
#include <string>

using namespace std;

class Video {
    
    private:
        string NombreVideo;
        string IDvideo;
        string fechaEstreno;
        float califVideo;

    public:

        Video();
        Video(string Nombre_video, string ID_video, string fecha_Estreno, float calif_video);

        string getNombreVideo();
        string getIDVideo();
        string getFechaEstreno();
        float getCalifVideo();
        void setCalifVideo(float NewCalif);
};


#endif
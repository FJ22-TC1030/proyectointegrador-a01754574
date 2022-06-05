// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "video.h"
#include <iostream>
#include <string>

Video::Video() {

    NombreVideo = "S/T";
    IDvideo = "000";
    fechaEstreno = "00/00/00";
    califVideo = 0;
}

Video::Video(string Nombre_video, string ID_video, string fecha_Estreno, float calif_video){

    NombreVideo = Nombre_video;
    IDvideo = ID_video;
    fechaEstreno = fecha_Estreno;
    califVideo = calif_video;
}

       
string Video::getNombreVideo() {return NombreVideo;}
string Video::getIDVideo() {return IDvideo;}
string Video::getFechaEstreno() {return fechaEstreno;}
float Video::getCalifVideo() {return califVideo;}

void Video::setCalifVideo(float NewCalif) {califVideo = NewCalif;}
        
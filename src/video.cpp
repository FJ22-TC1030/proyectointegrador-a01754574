// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "video.h"
#include <iostream>
#include <string>

Video::Video() {

    Nombre = "S/T";
    ID = "000";
    fechaEstreno = "00/00/00";
    calif = 0.0;
    duracion = 0;
}

Video::Video(string ID_, string Nom, int duracion_, string fechaEstreno_, int calif_){
    ID = ID_;
    Nombre = Nom;
    fechaEstreno = fechaEstreno_;
    calif = calif_;
    duracion = duracion_;
}


string Video::getIDVideo() {return ID;}      
string Video::getNombreVideo() {return Nombre;}
string Video::getFechaEstreno() {return fechaEstreno;}
float Video::getCalifVideo() {return calif;}
int Video::getDuracionVideo() {return duracion;}

void Video::setCalifVideo(float NewCalif) {calif = NewCalif;}

void Video::imprimir() {
    cout << "Nombre : " << Nombre << endl;
    cout << "ID: " << ID << endl;
    cout << "Fecha Estreno: " << fechaEstreno << endl;
    cout << "Calificacion: " << calif << endl;
    cout << "Duracion: " << duracion << endl;
}
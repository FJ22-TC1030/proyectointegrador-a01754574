// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "video.h"
#include <iostream>
#include <string>

Video::Video() {
    ID = "000";
    nombre = "S/T";
    fechaEstreno = "00/00/00";
    calif = 0.0;
    duracion = 0;
}

Video::Video(string _ID, string _nombre, string _fechaEstreno, float _calif, int _duracion) {
    ID = _ID;
    nombre = _nombre;
    fechaEstreno = _fechaEstreno;
    calif = _calif;
    duracion = _duracion;
}


string Video::getIDVideo() {return ID;}       
string Video::getNombreVideo() {return nombre;}
string Video::getFechaEstreno() {return fechaEstreno;}
float Video::getCalifVideo() {return calif;}
int Video::getDuracionVideo() {return duracion;}

void Video::setCalifVideo(float NewCalif) {calif = NewCalif;}
        

void Video::imprimir() {
    cout << "ID : " << ID << endl;
    cout << "Nombre : " << nombre << endl;
    cout << "Fecha Estreno : " << fechaEstreno << endl;
    cout << "Calificacion : " << calif << endl;
    cout << "Duracion : " << duracion << endl;
}
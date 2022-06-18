// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "episodio.h"
#include <iostream>
#include <string>

using namespace std;


Episodio::Episodio() : Video(), numEpisodio(0), temporada(0)  {}

// string Nombre_video, string ID_video, string fecha_Estreno, float calif_video, int duracion_video)
Episodio::Episodio(string ID_, string Nom, int duracion_, string fechaEstreno_, float calif_, int num_ep, int temp) : Video(ID_,Nom,duracion_,fechaEstreno_, calif_){
    
    numEpisodio = num_ep;
    temporada = temp;
}

int Episodio::getNumEpisodio() {return numEpisodio;}

int Episodio::getTemporada() {return temporada;}

void Episodio::imprimir(){
    
    Video::imprimir();
    cout << "*EPISODIO*" << endl;
    cout << "Numero Episodio: " << numEpisodio << endl;
    cout << "Temporada: " << temporada << endl;
    cout << "\n" << endl;
}

bool Episodio::operator>=(float cal) {
    if (getCalifVideo() >= cal) {return true;}
    else {return false;}
}

void Episodio::calific_cambio(float cali){
    setCalifVideo(cali); 
}

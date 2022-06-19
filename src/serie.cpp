/// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "serie.h"
#include "episodio.h"
using namespace std;

Serie::Serie() {
    id_Serie = "S/N";
    nombre_Serie = "S/N";
    genero_Serie = "S/G";
}

Serie::Serie(string idSer, string nombreSer, string generoSer) {
    id_Serie = idSer;
    nombre_Serie = nombreSer;
    genero_Serie = generoSer;
}

vector<Episodio> Serie::GetCapitulos(){
    return episodios;
}
string Serie::getIdSerie() {return id_Serie;}
string Serie::getNombreSerie() {return nombre_Serie;}
string Serie::getGeneroSerie() {return genero_Serie;}

void Serie::agregarEpisodio(Episodio episode){
    episodios.push_back(episode);
}

void Serie::imprimir(){
    cout << "\nID: " << id_Serie << endl;
    cout << "Nombre: " << nombre_Serie << endl;
    cout << "Genero: " << genero_Serie << endl;

    cout << "Episodios: " << endl;
    for (int i = 0; i < episodios.size(); i++){
        episodios[i].imprimir();
    }
}

void Serie::imprimir(float dato) {
    cout << "\nID: " << id_Serie << endl;
    cout << "Nombre: " << nombre_Serie << endl;
    cout << "Genero: " << genero_Serie << endl;

    cout << "Episodios: " << endl;
    for (int i = 0; i < episodios.size(); i++){
        if (episodios[i] >= dato){
            episodios[i].imprimir();
        }
    }
}

void Serie::Episodios(string nombre, float cambio) {
    for (int i = 0; i < episodios.size(); i++)
    {
        if (episodios[i].getNombreVideo() == nombre)
        {
            episodios[i].calific_cambio(cambio);
            episodios[i].imprimir();
        }
    }
}

bool Serie::operator>=(float dato2){
    int b = 0;
    for (int i = 0; i < episodios.size(); i++){
        if (episodios[i] >= dato2){
            b += 1;
        }
    }
    
    if (b >= 1){
        return true;
    
    }else{
        return false;
    }
}

bool Serie::operator == (string genero){
    stringstream token(genero_Serie);
    string genero1, genero2, genero3, genero4, genero5, genero6;
    
    getline(token, genero1, '/'); 
    getline(token, genero2, '/');
    getline(token, genero3, '/');
    getline(token, genero4, '/');
    getline(token, genero5, '/'); 
    getline(token, genero6, '/'); 
    
    if (genero == genero1 | genero == genero2 | genero == genero3 | genero == genero4 | genero == genero5 | genero == genero6){
        return true;
    
    }else{
        return false;
    }
}
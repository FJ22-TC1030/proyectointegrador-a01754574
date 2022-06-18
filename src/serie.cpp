// Luis Fernando De León Silva A01754574 
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

Serie::Serie(string idS, string nombreS, string generoS) {
    id_Serie = idS;
    nombre_Serie = nombreS;
    genero_Serie = generoS;
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

    cout << "Lista de episodios: " << endl;
    for (int i = 0; i < episodios.size(); i++){
        episodios[i].imprimir();
    }
}

void Serie::imprimir(float cal) {
    cout << "\nID: " << id_Serie << endl;
    cout << "Nombre: " << nombre_Serie << endl;
    cout << "Genero: " << genero_Serie << endl;

    cout << "Lista de episodios: " << endl;
    for (int i = 0; i < episodios.size(); i++){
        if (episodios[i] >= cal){
            episodios[i].imprimir();
        }
    }
}

void Serie::buscarEpisodio(string nombre, float c) {
    for (int i = 0; i < episodios.size(); i++)
    {
        if (episodios[i].getNombreVideo() == nombre)
        {
            episodios[i].calific_cambio(c);
            episodios[i].imprimir();
        }
    }
}

bool Serie::operator>=(float cal){
    int bandera = 0;
    for (int i = 0; i < episodios.size(); i++){
        if (episodios[i] >= cal){
            bandera += 1;
        }
    }
    
    if (bandera >= 1){
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
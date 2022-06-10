// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#define NOMBRE_ARCHIVO "BasePelículas.csv"
#include "catalogo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

Catalogo::Catalogo() {

    vector<Pelicula>Pel;
    vector<Serie>ser;

    pelicula = Pel;
    serie = ser;

}

Catalogo::Catalogo(vector<Pelicula> pels, vector<Serie> sre){

    pelicula = pels;
    serie = sre;

}

void Catalogo::cargarArchivo(){
    ifstream archivo(NOMBRE_ARCHIVO);
    archivo.open("BasePelículas.csv");

    if(archivo.is_open()) {
        string linea;

        while(getline(archivo, linea)) {
            
            string simbolo1, simbolo2, simbolo3, simbolo4, simbolo5, simbolo6, simbolo7, simbolo, simbolo9;
            vector<string> simbolos = vector<string>();
            cout << linea << endl;

            stringstream token(linea);

            
            for (int i=0; i<11; i++) {
                string simbolo_;
                getline(token, simbolo_, ',');
                cout << simbolo_ << endl;
            }
        
        
        }

    } else {
        puts("No se ha abierto el archivo");

        
    }

   
}

void Catalogo::mostrarCatalogo() {

    
}

void Catalogo::mostrarPeliculas() {
    for(int i = 0; i < pelicula.size(); i++) {
        
        cout << "Nombre pelicula: " << pelicula[i].getNombrePelicula() << endl; 
        cout << "Duracion: " << pelicula[i].getDuracionPelicula() << endl;
        cout << "Id pelicula: " << pelicula[i].getIDPelicula() << endl;
        cout << "Genero: " << pelicula[i].getGeneroPelicula() << endl;
        cout << "Fecha Estreno: " << pelicula[i].getFechaEstreno() << endl;

    }
}

void Catalogo::mostrarSeries() { 
    for (int i = 0; i < serie.size(); i++) {
        cout << "Nombre serie: " << serie[i].getNombreSerie() << endl;
        cout << "Id serie: " << serie[i].getIdSerie() << endl;
        cout << "Genero: "  << serie[i].getGeneroSerie() << endl;
        cout << "Duracion: " << serie[i].getDuracionSerie() << endl;
        cout << "Calificacion: " << serie[i].getCalificacionSer() << endl;
        serie[i].imprimir();
    }
}

void Catalogo::agregarPeliculas(Pelicula Pelicula1) {

    pelicula.push_back(Pelicula1);

}

void Catalogo::agregarSeries(Serie Serie1) {

    
    serie.push_back(Serie1);

}

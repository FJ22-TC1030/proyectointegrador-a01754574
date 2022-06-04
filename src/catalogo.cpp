#include "catalogo.h"
#include <iostream>
#include <string>
#include <vector>

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
        
        // ESTE METODO AUN NO SE USARA 
}

void Catalogo::mostrarCatalogo() {

    // ESTE METODO AUN NO SE USA
}

void Catalogo::mostrarPeliculas() {
    for(int i = 0; i < pelicula.size(); i++) {
        
        cout << "Nombre pelicula: " << pelicula[i].getNombrePelicula() << endl; 
        cout << "Duracion: " << pelicula[i].getDuracionPelicula() << endl;
        cout << "Id pelicula: " << pelicula[i].getIDPelicula() << endl;
        
        vector <string> Gen;
        
        Gen = pelicula[i].getGeneroPelicula();
        
        for (int j = 0; j < Gen.size();j++) {
            cout << "Genero: " << Gen[j] << endl;
        }
        
    }
}   


void Catalogo::mostrarSeries() { 
    for (int i = 0; i < serie.size(); i++) {
        cout << "Nombre serie: " << serie[i].getNombreSerie() << endl;
        cout << "Lista episodios: " << endl;

        serie[i].imprimir();
    }
}
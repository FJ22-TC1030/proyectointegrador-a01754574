// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "episodio.h"
#include "serie.h"
#include "pelicula.h"
#include "catalogo.h"

using namespace std;
using std::cout;
using std::endl;
using std::ifstream;
using std::stof;
using std::stoi;
using std::string;
using std::stringstream;

void Catalogo::Series(Serie ser) {
    series.push_back(ser);
}

void Catalogo::Peliculas(Pelicula pel) {
    peliculas.push_back(pel);
}

void Catalogo::imprimir() {
    cout << "Series: " << endl;
    for (int i = 0; i < series.size(); i++) {
        series[i].imprimir();
    }

    cout << "\nPeliculas: " << endl;
    for (int j = 0; j < peliculas.size(); j++) { 
        peliculas[j].imprimir();
        cout << endl;
    }
}

void Catalogo::cargarCatalogo() {
    
    ifstream archivo;
    string linea;
    archivo.open("BasePeliculas.csv");
    
    getline(archivo, linea);
    while (getline(archivo, linea)){

        stringstream token(linea);
        string ID, Nombre, Duracion, Genero, Calificacion, Fecha_Estreno, Nombre_Episodio, Temporada, no_Episodio, iD_Episodio;

        getline(token, ID, ','); //columna 1
        getline(token, Nombre, ','); // columna 2
        getline(token, Duracion, ','); // columna 3
        getline(token, Genero, ','); // columna 4
        getline(token, Calificacion, ','); // columna 5
        getline(token, Fecha_Estreno, ','); // columna 6
        getline(token, Nombre_Episodio, ','); // columna 7
        getline(token, Temporada, ','); // columna 8
        getline(token, no_Episodio, ','); // columna 9
        getline(token, iD_Episodio); // columna 10
        
        int columna3 = stoi(Duracion);
        float columna5 = stof(Calificacion);

        if (Temporada == "") {
            Pelicula pelicula(ID, Nombre, columna3, Fecha_Estreno, Genero, columna5);
            Peliculas(pelicula);
        
        } else {

            bool b = false;
            int columna8 = stoi(Temporada);
            int columna9 = stoi(no_Episodio);
            if (series.size() == 0) {

                Serie serie1(ID, Nombre, Genero);
                Episodio episodio(iD_Episodio, Nombre_Episodio, columna3, Fecha_Estreno, columna5,  columna9, columna8);
                serie1.agregarEpisodio(episodio);
                Series(serie1);
            
            } else {
                
                for(int i = 0; i < series.size(); i++){
                    
                    if(series[i].getNombreSerie() == Nombre){
                        Episodio episodio(iD_Episodio, Nombre_Episodio, columna3, Fecha_Estreno, columna5,  columna9, columna8);
                        series[i].agregarEpisodio(episodio);
                        b = true;
                    }
                }
                
                if(b == false) {
                    
                    Serie serie(ID, Nombre, Genero);
                    Episodio episodio(iD_Episodio, Nombre_Episodio, columna3, Fecha_Estreno, columna5,  columna9, columna8);
                    serie.agregarEpisodio(episodio);
                    Series(serie);
                }
            }
        }
    }
    
    archivo.close();
}

void Catalogo::calificar(float calificacion){
    
    if (calificacion < 1 || calificacion > 10){
        cout << "Error. Introduce una calificacion en el rango del 1 al 10" << endl;
    
    } else {
         
        int Ser = 0, Pel = 0;

        cout << "\nLas listas de Peliculas con mayor calificacion: " << endl;
        
        for (int i = 0; i < peliculas.size(); i++) {
            if(peliculas[i] >= calificacion){
                
                peliculas[i].imprimir();
                cout << endl;
                Pel += 1;
            }
        }
        
        if (Pel == 0){
            cout << "No tenemos esa calificacion" << endl;
        }
        
        cout << "\nSeries y Episodios con calificacion mayor: " << endl;

        for (int j = 0; j < series.size(); j++) {
            if(series[j] >= calificacion) {
                
                series[j].imprimir(calificacion);
                Ser += 1;
            }
        }
        if(Ser == 0)
        {
            cout << "No tenemos esa calificacion" << endl;
        }
    }
}

void Catalogo::generos(string genero)
{
   int c = 0;
    cout << "\nPeliculas con el genero solicitado: " << endl;
    for (int i = 0; i < peliculas.size(); i++){
        if (peliculas[i] == genero){

            peliculas[i].imprimir();
            cout << endl;
            c += 1;
        }
    }
    
    if (c == 0){
        cout << "No tenemos ese genero" << endl;
    }
    c = 0;
    cout << "\nSeries con el genero solicitado: " << endl;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i] == genero)
        {
            series[i].imprimir();
            cout << endl;
            c += 1;
        }
    }
    if (c == 0)
    {
        cout << "No tenemos ese genero" << endl;
    }
}
void Catalogo::encuentraSerie(string serie)
{
    int c = 0;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i].getNombreSerie() == serie)
        {
            series[i].imprimir();
            c += 1;
        }
    }
    if (c == 0)
    {
        cout << "No encontramos esa Serie" << endl;
    }
}

void Catalogo::clas_cali(float clas)
{
    if (clas > 11)
    {
        cout << "La calificacion no puede ser mayor a 10" << endl;
    }
    else
    {
        cout << "Peliculas con igual o mayor calificacion" << endl;
        int c = 0;
        for (int i = 0; i < peliculas.size(); i++)
        {
            if (peliculas[i] >= clas)
            {
                peliculas[i].imprimir();
                cout << endl;
                c += 1;
            }
        }
        if (c == 0)
        {
            cout << "No tenemos esa calificacion" << endl;
        }
    }
}
void Catalogo::calificarVideo(string video, float cali) {
    for (int i = 0; i < peliculas.size(); i++)
    {
        if (peliculas[i].getNombreVideo() == video)
        {
            peliculas[i].calif_cambio(cali);
            peliculas[i].setCalifVideo(cali);
            peliculas[i].imprimir();
            
        }
    }

    for (int i = 0; i < series.size(); i++)
    {
        series[i].Episodios(video, cali);
    }
}

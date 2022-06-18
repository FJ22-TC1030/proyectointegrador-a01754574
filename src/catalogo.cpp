// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Episodio.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Catalogo.h"

using namespace std;
using std::cout;
using std::endl;
using std::ifstream;
using std::stof;
using std::stoi;
using std ::string;
using std::stringstream;

void Catalogo::agregarSerie(Serie ser) {
    series.push_back(ser);
}

void Catalogo::agregarPelicula(Pelicula pel) {
    peliculas.push_back(pel);
}

void Catalogo::imprimir() {
    cout << "Lista de series: " << endl;
    for (int i = 0; i < series.size(); i++) {
        series[i].imprimir();
    }

    cout << "\nLista de Peliculas: " << endl;
    for (int j = 0; j < peliculas.size(); j++) { 
        peliculas[j].imprimir();
        cout << endl;
    }
}

void Catalogo::leerCatalogo() {
    
    ifstream archivo;
    string line;
    archivo.open("BasePeliculas.csv");
    
    getline(archivo, line);
    while (getline(archivo, line)){

        stringstream token(line);
        string id, nombre, duracion, genero, calificacion, fechaEstreno, nombreEpisodio, temporada, numEpisodio, idEpi;

        getline(token, id, ',');
        getline(token, nombre, ',');
        getline(token, duracion, ',');
        getline(token, genero, ',');
        getline(token, calificacion, ',');
        getline(token, fechaEstreno, ',');
        getline(token, nombreEpisodio, ',');
        getline(token, temporada, ',');
        getline(token, numEpisodio, ',');
        getline(token, idEpi);
        
        int durac = stoi(duracion);
        float cali = stof(calificacion);

        if (temporada == "") {
            Pelicula pelicula(id, nombre, durac, fechaEstreno, genero, cali);
            agregarPelicula(pelicula);
        
        } else {

            bool bandera = false;
            int temp = stoi(temporada);
            int numEp = stoi(numEpisodio);
            if (series.size() == 0) {

                Serie serie1(id, nombre, genero);
                Episodio episodio(idEpi, nombreEpisodio, durac, fechaEstreno, cali,  numEp, temp);
                serie1.agregarEpisodio(episodio);
                agregarSerie(serie1);
            
            } else {
                
                for(int i = 0; i < series.size(); i++){
                    
                    if(series[i].getNombreSerie() == nombre){
                        Episodio episodio(idEpi, nombreEpisodio, durac, fechaEstreno, cali,  numEp, temp);
                        series[i].agregarEpisodio(episodio);
                        bandera = true;
                    }
                }
                
                if(bandera == false) {
                    
                    Serie serie(id, nombre, genero);
                    Episodio episodio(idEpi, nombreEpisodio, durac, fechaEstreno, cali,  numEp, temp);
                    serie.agregarEpisodio(episodio);
                    agregarSerie(serie);
                }
            }
        }
    }
    
    archivo.close();
}

void Catalogo::califVideos(float calif){
    
    if (calif < 1 || calif > 10){
        cout << "No es vÃ¡lida esa calificaciÃ³n. Necesita ser del 1-10" << endl;
    
    } else {
         
        int contadorS = 0, contadorP = 0;

        cout << "\nLista de PelÃ­culas con mayor calificaciÃ³n: " << endl;
        
        for (int i = 0; i < peliculas.size(); i++) {
            if(peliculas[i] >= calif){
                
                peliculas[i].imprimir();
                cout << endl;
                contadorP += 1;
            }
        }
        
        if (contadorP == 0){
            cout << "Lo sentimos, no tenemos pelÃ­culas con esa calificaciÃ³n" << endl;
        }
        
        cout << "\nLista de Series y Episodios con mayor calificaciÃ³n: " << endl;

        for (int j = 0; j < series.size(); j++) {
            if(series[j] >= calif) {
                
                series[j].imprimir(calif);
                contadorS += 1;
            }
        }
        if(contadorS == 0)
        {
            cout << "Lo sentimos, no tenemos episodios con esa calificaciÃ³n" << endl;
        }
    }
}

void Catalogo::clasificar_generos(string gen) // opcion 2.2
{
    int contador = 0;
    cout << "\nLista de PelÃ­culas con ese gÃ©nero: " << endl;
    for (int i = 0; i < peliculas.size(); i++){
        if (peliculas[i] == gen){

            peliculas[i].imprimir();
            cout << endl;
            contador += 1;
        }
    }
    
    if (contador == 0){
        cout << "Lo sentimos, no tenemos peliculas con ese gÃ©nero" << endl;
    }
    contador = 0;
    cout << "\nLista de series con ese gÃ©nero: " << endl;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i] == gen)
        {
            series[i].imprimir();
            cout << endl;
            contador += 1;
        }
    }
    if (contador == 0)
    {
        cout << "Lo sentimos, no tenemos series con ese gÃ©nero" << endl;
    }
}

void Catalogo::buscaSerie(string serie) // opciÃ³n 3
{
    int contador = 0;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i].getNombreSerie() == serie)
        {
            series[i].imprimir();
            contador += 1;
        }
    }
    if (contador == 0)
    {
        cout << "Lo sentimos, no es vÃ¡lida esa serie" << endl;
    }
}

void Catalogo::clasificarP_cali(float c) // opciÃ³n 4
{
    if (c > 10)
    {
        cout << "No es vÃ¡lida esa calificaciÃ³n. Debe ser menor a 10" << endl;
    }
    else
    {
        cout << "PelÃ­culas con esa calificaciÃ³n o mayores" << endl;
        int contador = 0;
        for (int i = 0; i < peliculas.size(); i++)
        {
            if (peliculas[i] >= c)
            {
                peliculas[i].imprimir();
                cout << endl;
                contador += 1;
            }
        }
        if (contador == 0)
        {
            cout << "Lo sentimos, no tenemos pelÃ­culas con esa calificaciÃ³n o superior" << endl;
        }
    }
}
void Catalogo::calificarVideo(string video, float cali) // opciÃ³n 5
{
    for (int i = 0; i < peliculas.size(); i++)
    {
        if (peliculas[i].getNombreVideo() == video)
        {
            peliculas[i].calif_cambio(cali);
            peliculas[i].imprimir();
        }
    }
    // entrar a listas episodios

    for (int i = 0; i < series.size(); i++)
    {
        series[i].buscarEpisodio(video, cali);
    }
}

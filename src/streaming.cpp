// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911


#include "video.h"
#include "pelicula.h"
#include "episodio.h"
#include "serie.h"
#include "catalogo.h"
#include "streaming.h"
#include "ExcepcionStream.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;
using std::cin;
using std::cout;
using std::getline;


Streaming::Streaming() {}

void Streaming::start() {
    imprime.cargarCatalogo();
    menu();
}

void Streaming::menu() {
    op = "1";

    while (op != "7") {

        try {

            cout << "\n        * BIENVENIDOS A TEC-FLIX *        " << endl;
		    cout << "\n1. Cargar archivo de datos (Excel o csv)" << endl;
		    cout << "2. Mostrar los videos de cierto genero" << endl;
		    cout << "3. Mostrar los episodios de una determinada serie." << endl;
		    cout << "4. Mostrar las películas con una calificacion mayor a cierto número" << endl;
		    cout << "5. Calificar un video" << endl;
            cout << "6. Salir" << endl;
            cout << "\nElige una opcion: " ;
            cin >> op; 

            // Esto es para que la excepcion haga su trabajo y para que dentro del menu se despligue el error
            if (op != "1" && op != "2" && op != "3" && op != "4" && op != "5" && op != "6") {
                ExcepcionStream error("El valor ingresado no es valido");
                throw(error);
            }

            
            if (op == "1") {
            
                imprime.imprimir();
           
           
            } else if (op == "2") {

                try {
                    string opcion2;
                    string genero, cal;
                    float calificar;
        
                    cout << "1. Una calificacion mayor" << endl;
		            cout << "2. Un cierto genero" << endl;
                    cout << "introduce la opcion que deseas saber: ";
                    cin >> opcion2;
        
                    if (opcion2 != "1" && opcion2 != "2") {
                    ExcepcionStream error("El valor ingresado no es valido");
                    throw(error);
                    }
        
                    if (opcion2 == "1") {
                    cout << "Escoge una calificacion del 1 al 10: " ;
                    cin >> cal;
                    calificar = stof(cal);
                    imprime.calificar(calificar);
                    }
        
                else if (opcion2 == "2") {
                
                    cout << "Genero disponibles -> las opciones son:" << endl;
                    cout << "\nAction \nAdventure \nDrama \nFantasy \nRomance \nSci-Fi \nAnimation \nFamily \nMusical \nWar \nCrime \nMistery \nThriller \nComedy \nWestern \nBiography \nHorror \n¿Qué deseas buscar? introduce aqui: " ;
                    cin >> genero;
                    if (genero != "Action" && genero != "Adventure" && genero != "Drama" && genero != "Fantasy" && genero != "Romance" && genero != "Sci-Fi" && genero != "Animation" && genero != "Family" && genero != "Musical" && genero != "War" && genero != "Crime" && genero != "Mistery" && genero != "Thriller" && genero != "Comedy" && genero != "Western" && genero != "Biography" && genero != "Horror")
                {
                    ExcepcionStream error("No encontramos ese genero");
                    throw(error);
                }
                    imprime.generos(genero);
                
                {
                    ExcepcionStream error("Ese genero no es valido");
                    throw(error);
                }
                
                imprime.generos(genero);
            
            }
            
        
        }
            catch (ExcepcionStream const &error) {
                error.mensaje();
            }
        
            catch (std::invalid_argument const &error) {
                cout << "Error, debe ser un numero" << endl;
            }
                

            } else if (op == "3") {

            string serie;
            cout << "¿Que serie quieres que te mostremos?" << endl;
            cin.ignore();
            getline(cin, serie);
            imprime.encuentraSerie(serie); 


            } else if (op == "4") {
                
            float c;
            cout << "¿Desde que calificacion quieres que te muestre las peliculas (maximo es 10)?" << endl;
            cin >> c;
            imprime.clas_cali(c);


            } else if (op == "5") {

            try {
                string video;
                cout << "Ingresa el nombre del capitulo o pelicula que te gustaria calificar: " << endl;
                cin.ignore();
                getline(cin, video);
                float cali;
                cout << "Ingresa la calificacion que quieres darle: " << endl;
                cin >> cali;

            if (cali < 1 || cali > 10) {
                ExcepcionStream error("El valor ingresado no es valido");
                throw(error);
            }

                imprime.calificarVideo(video, cali);
        
            } catch (ExcepcionStream const &error) {
                error.mensaje();
        }
                
            
            
            } else if (op == "6") {
                cout << "Hasta la proxima" << endl;
                break;
            }
        }
        catch (ExcepcionStream const &error)
        {
            error.mensaje();
        }
    }
}
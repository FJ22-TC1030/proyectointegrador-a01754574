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
    catalogo.leerCatalogo();
    menu();
}

void Streaming::menu() {
    opcion = "1";

    while (opcion != "7") {
        try {
            cout << "\n        * BIENVENIDOS A TEC-FLIX *        " << endl;
		    cout << "\n1. Cargar archivo de datos (Excel o csv)" << endl;
		    cout << "2. Mostrar los videos de cierto genero" << endl;
		    cout << "3. Mostrar los episodios de una determinada serie." << endl;
		    cout << "4. Mostrar las películas con una calificacion mayor a cierto número" << endl;
		    cout << "5. Calificar un video" << endl;
            cout << "6. Mostrar la actualización de peliculas y series" << endl;
            cout << "7. Salir" << endl;
            cout << "\nElige una opcion: " ;
            cin >> opcion;
         

            if (opcion != "1" && opcion != "2" && opcion != "3" && opcion != "4" && opcion != "5" && opcion != "6" && opcion != "7" ) {
                ExcepcionStreaming exc("El valor ingresado no es valido");
                throw(exc);
            }

            /* 
            if (opcion == "1") {
                catalogo.imprimir();
            } else if (opcion == "2") {
                opcion2();
            } else if (opcion == "3") {
                opcion3();
            } else if (opcion == "4") {
                opcion4();
            } else if (opcion == "5") {
                opcion5();
            } else if (opcion == "6") {
                opcion6();
            } else if (opcion == "7") {
                cout << "¡Vuelve pronto!" << endl;
                break;
            }
            */

            switch(opcion) {
                case "1":
                    catalogo.imprimir();
                case "2":
                    opcion2();
                case "3":
                    opcion3();
                case "4":
                    opcion4();
                case "5":
                    opcion5();
                case "6":
                    opcion6();
                default:
                    cout << "¡Vuelve pronto!" << endl;
                    break;
            }

        } catch(ExcepcionStreaming const &exc) {
            exc.mensaje();
        }
    }
}

void Streaming::opcion2() {
    try {
        string opcion2;
        string gen, califi1;
        float califi;
        
        cout << "1. Una calificacion mayor" << endl;
		cout << "2. Un cierto genero" << endl;
        cout << "introduce la opcion que deseas saber: ";
        cin >> opcion2;
        
        if (opcion2 != "1" && opcion2 != "2") {
            ExcepcionStreaming exc("El valor ingresado no es valido");
            throw(exc);
        }
        
        if (opcion2 == "1") {
            cout << "Escoge una calificacion del 1 al 10: " ;
            cin >> califi1;
            califi = stof(califi1);
            catalogo.califVideos(califi);
        }
        
        else if (opcion2 == "2") {
                
                cout << "Genero disponibles -> las opciones son:" << endl;
                cout << "\nAccion \nAventura \nDrama \nFantasia \nRomance \nSci-Fi \nAnimacion \nFamiliar \nMusical \nGuerra \nCrimen \nMisterio \nTerror \nComedia \nWestern \nBiografia \nHorror \n¿Qué deseas buscar? introduce aqui: " ;
                cin >> gen;
                catalogo.clasificar_generos(gen);
                
                {
                    ExcepcionStreaming exc("Ese genero no es valido");
                    throw(exc);
                }
                catalogo.clasificar_generos(gen);
            
        }
            
        
    }
        catch (ExcepcionStreaming const &exc) {
            exc.mensaje();
        }
        
        catch (std::invalid_argument const &error) {
            cout << "Error, debe ser un numero" << endl;
        }
    }
    
    void Streaming::opcion3() {
        
        string serie;
        cout << "¿Que serie quieres que te mostremos?" << endl;
        cin.ignore();
        getline(cin, serie);
        catalogo.buscaSerie(serie);
    }

    void Streaming::opcion4() {
        
        float c;
        cout << "¿Desde que calificacion quieres que te muestre las peliculas (maximo es 10)?" << endl;
        cin >> c;
        catalogo.clasificarP_cali(c);
    }
    
    void Streaming::opcion5() {
        try {
            string video;
            cout << "Ingresa el nombre del capitulo o pelicula que te gustaria calificar: " << endl;
            cin.ignore();
            getline(cin, video);
            float cali;
            cout << "Ingresa la calificacion que quieres darle: " << endl;
            cin >> cali;

            if (cali < 1 || cali > 10) {
                ExcepcionStreaming exc("El valor ingresado no es valido");
                throw(exc);
            }

            catalogo.calificarVideo(video, cali);
        } catch (ExcepcionStreaming const &exc) {
            exc.mensaje();
        }
   
    }

    void Streaming::opcion6() {
        
    }
}
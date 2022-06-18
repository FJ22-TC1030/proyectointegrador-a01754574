#ifndef STREAMING_H
#define STREAMING_H

#pragma once
#include <string>
#include "video.h"
#include "Pelicula.h"
#include "Episodio.h"
#include "serie.h"
#include "catalogo.h"
#include <iostream>
#include <string>


using namespace std;


class Streaming {
    
    private:
        string opcion;
        Catalogo catalogo;

    public:
        Streaming();
        void start();
        void menu();
        int setOpcion(int op);

        void opcion2();
        void opcion3();
        void opcion4();
        void opcion5();
        void opcion6();
};

#endif
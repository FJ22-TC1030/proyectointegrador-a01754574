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
        string op;
        Catalogo imprime;

    public:
        Streaming();
        void start();
        void menu();

};

#endif
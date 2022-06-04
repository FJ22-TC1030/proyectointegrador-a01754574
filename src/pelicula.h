#pragma once
#include "video.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pelicula {

    private:
        string idPelicula;
        vector<string> generoPelicula;
        int duracionPelicula;
    
    public:
        Pelicula();
        
        string getIDPelicula();
        vector<string> getGeneroPelicula();
        int getDuracionPelicula();

        void setCalifPelicula(float newCalif);
};
#pragma once
#include "video.h"
#include <iostream>
#include <string>

using namespace std;

class Episodio {

    private:
        string idEpisodio;
        int numEpisodio;
    
    public:
        Episodio();

        string getIDEpisodio();
        int getNumeroEpisodio();

        void setCalifEpisodio(float newCalifEp);
};
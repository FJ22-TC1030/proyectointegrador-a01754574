// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911


#ifndef EXCEPCIONSTREAM_H
#define EXCEPCIONSTREAM_H

#pragma once
#include "streaming.h"
#include <exception>
#include <string>

using namespace std;

class ExcepcionStream: public Streaming {

    private:
        string imprime;

    public:
        ExcepcionStream();
        ExcepcionStream(string imprime2);

        void mensaje() const;
};

#endif
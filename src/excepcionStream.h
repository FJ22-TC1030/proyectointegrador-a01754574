#ifndef EXCEPCIONSTREAMING_H
#define EXCEPCIONSTREAMING_H

#pragma once
#include "streaming.h"
#include <exception>
#include <string>

using namespace std;

class ExcepcionStreaming: public Streaming {

    private:
        string txt;

    public:
        ExcepcionStreaming();
        ExcepcionStreaming(string texto);

        void mensaje() const;
};

#endif
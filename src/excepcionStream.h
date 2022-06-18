#ifndef EXCEPCIONSTREAMING_H
#define EXCEPCIONSTREAMING_H

#pragma once
#include "streaming.h"
#include <exception>
#include <string>

using namespace std;
using std::exception;
using std::string;

class ExcepcionStreaming: public exception {

    private:
        string texto;

    public:
        ExcepcionStreaming();
        ExcepcionStreaming(string txt);

        void mensaje() const;
};
#endif
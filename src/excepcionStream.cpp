#include "ExcepcionStream.h"
#include <string>
#include <iostream>


using namespace std;


ExcepcionStreaming::ExcepcionStreaming() {}

ExcepcionStreaming::ExcepcionStreaming(string texto) {txt = texto;}

void ExcepcionStreaming::mensaje() const {cout << "Valor igualito " << txt << endl;}
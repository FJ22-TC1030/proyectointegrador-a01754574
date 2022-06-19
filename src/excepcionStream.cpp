// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911


#include "ExcepcionStream.h"
#include <string>
#include <iostream>


using namespace std;


ExcepcionStream::ExcepcionStream() {}

ExcepcionStream::ExcepcionStream(string imprime2) {imprime = imprime2;}

void ExcepcionStream::mensaje() const {cout << "Ingresa de nuevo la opcion " << imprime << endl;}
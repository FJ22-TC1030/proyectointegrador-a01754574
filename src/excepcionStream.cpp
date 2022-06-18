#include "ExcepcionStream.h"
#include <string>
#include <iostream>


using namespace std;


ExcepcionStreaming::ExcepcionStreaming() {}

ExcepcionStreaming::ExcepcionStreaming(string txt) {texto = txt;}

void ExcepcionStreaming::mensaje() const {cout << "¡Error! " << texto << endl;}
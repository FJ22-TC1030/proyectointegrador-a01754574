// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "catalogo.h"
#include "pelicula.h"
#include "streaming.h"

using namespace std;


int main() {

    Catalogo Catalogo;
    Streaming tecplus;

    Catalogo.cargarCatalogo();
    tecplus.start();

    return 0;
}
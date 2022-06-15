// Luis Fernando De León Silva A01754574 
// Oswaldo Daniel Hernandez De Luna A01753911

#include "catalogo.h"
#include "pelicula.h"


using namespace std;


int main() {
    Episodio Episodio("tt1668899","Winter is coming",1,1,"04/17/2011", 9, 9);

    Pelicula Pelicula("tt0107290","Jurassic Park", "Action, Adventure, Sci-Fi, Thriller", 127, 8.1, "11/06/1993");

    Serie Serie("tt14800055","Game of Thrones", "Action, Adventure, Drama, Fantasy, Romance", 57, 8.8);

    // Serie.agregarEpisodio(Episodio);

    Catalogo Catalogo;


   /* Catalogo.agregarSeries(Serie);
    Catalogo.agregarPeliculas(Pelicula);
    cout << "\n***SE IMPRIME EL CATALOGO***" << endl;
    cout << "\n***PELICULAS***" << endl;
    Catalogo.mostrarPeliculas();

    cout << "\n***SERIES***" << endl;
    Catalogo.mostrarSeries();
    
    cout << Pelicula.getNombrePelicula();
    cout << Serie.getNombreSerie();*/

    Catalogo.cargarArchivo();
    Catalogo.mostrarCatalogo();

    return 0;
}
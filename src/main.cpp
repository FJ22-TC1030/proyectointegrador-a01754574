#include "catalogo.h"
#include "pelicula.h"


using namespace std;


int main() {
    
    vector<string>Generos;
    Generos.push_back("Accion");
    Generos.push_back("Romance");
    
    Pelicula Pelicula1("012", "Piratas", Generos, 120, 90, "12/07/2019");
    Pelicula Pelicula2("041", "Megamente", Generos, 145, 100, "24/07/2010");
    vector<Pelicula>pelic;
    pelic.push_back(Pelicula1);
    pelic.push_back(Pelicula2);

    Episodio episodio1 ("123","Hola", 2, 4, "24/07/2010", 76);
    Episodio episodio2 ("123","Adios", 5,24, "30/04/2015", 90);

    vector<Episodio>eps;
    eps.push_back(episodio1);
    eps.push_back(episodio2);

    Serie serie1(eps,"1234", "Bob esponja", Generos, 30, 100);
    vector<Serie>sers;
    sers.push_back(serie1);

    Catalogo catalogo(pelic,sers);
    catalogo.mostrarPeliculas();
    catalogo.mostrarSeries();
    
    
    return 0;
}
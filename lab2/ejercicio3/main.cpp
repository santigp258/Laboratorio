#include <iostream>
#include "Arreglo.h"

using namespace std;

int main() {

    cout << "ARREGLO A" << endl;
    Arreglo arreglo1 = Arreglo();
    arreglo1.pedirDatos();
    double promedioA = arreglo1.getPromedio();
    cout << "El promedio del arreglo A es " << promedioA << endl;
    cout << "La suma del arreglo A es " << arreglo1.getSuma() << endl;
    cout << "Los valores que superando el promedio del arreglo A son " << arreglo1.getCantidadMayorAlPromedio() << endl;


    cout << "ARREGLO B" << endl;
    Arreglo arreglo2 = Arreglo();
    arreglo2.pedirDatos();
    double promedioB = arreglo2.getPromedio();

    cout << "El promedio del arreglo B es " << promedioB << endl;
    cout << "La suma del arreglo B es " << arreglo2.getSuma() << endl;
    cout << "Los valores que superando el promedio del arreglo B son " << arreglo2.getCantidadMayorAlPromedio() << endl;

    if (promedioA > promedioB) {
        cout << "El promedio del arreglo A es mayor siendo " << promedioA << endl;
    } else {
        cout << "El promedio del arreglo B es mayor siendo " << promedioB << endl;
    }

    return 0;
}
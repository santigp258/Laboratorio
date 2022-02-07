#include <iostream>

using namespace std;

#include "Arreglos.h"

int main() {

    Arreglos arreglo = Arreglos();


    // arr 20 posiones {2,4, 6, 3, 9}

    arreglo.generarNumerosRamdons();
    arreglo.ordenarNumeros();

    arreglo.imprimirNumeros();

    return 0;
}

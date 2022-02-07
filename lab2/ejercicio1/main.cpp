#include <iostream>
#include "Arreglos.h"

using namespace std;


int main() {

    Arreglos arreglo = Arreglos();

    arreglo.generarNumerosRamdons();
    arreglo.generarCuadrado();
    arreglo.generarCubo();
    arreglo.printArrs();

    return 0;
}

//
// Created by santi on 05/02/2022.
//

#ifndef EJERCICO4_ARREGLO_H
#define EJERCICO4_ARREGLO_H
#include "iostream"
#include <cmath>
#include <iomanip>
using namespace std;
class Arreglo {
public:
    Arreglo();
    void generarNumerosRamdons();
    void imprimiResultados();

private:
    void indicarCantidadEstudiantes();
    double arreglo[20];
    int deficientes = 0;
    int regulares = 0;
    int buenos = 0;
    int excelentes = 0;
};


#endif //EJERCICO4_ARREGLO_H

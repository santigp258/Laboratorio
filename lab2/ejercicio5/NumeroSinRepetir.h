//
// Created by santi on 05/02/2022.
//

#ifndef EJERCICIO5_NUMEROSINREPETIR_H
#define EJERCICIO5_NUMEROSINREPETIR_H

#include "iostream"
#include <vector>

using namespace std;

class NumeroSinRepetir {
public:
    NumeroSinRepetir();

    void generarNumerosRamdons();

    bool validarNumeros(int num, vector<int>);

    void generarSinRepetir();

    const int *getNumeros() const;

    int numeros[20];
};


#endif //EJERCICIO5_NUMEROSINREPETIR_H

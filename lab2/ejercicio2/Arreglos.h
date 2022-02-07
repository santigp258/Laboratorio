//
// Created by santi on 05/02/2022.
//

#ifndef EJERCICIO2_ARREGLOS_H
#define EJERCICIO2_ARREGLOS_H
#include "iostream"
using namespace std;

class Arreglos {
public:
    Arreglos();
    void generarNumerosRamdons();
    void imprimirNumeros();
    void ordenarNumeros();

    const int *getArr1() const;

    const int *getArr2() const;

private:
    int arr1[100];
    int arr2[100];
};


#endif //EJERCICIO2_ARREGLOS_H

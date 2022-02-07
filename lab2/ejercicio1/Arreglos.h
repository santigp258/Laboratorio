//
// Created by santi on 05/02/2022.
//

#ifndef EJERCICIOS1_ARREGLOS_H
#define EJERCICIOS1_ARREGLOS_H

#include "iostream"
#include <cmath>
#include <iomanip>

using namespace std;

class Arreglos {
public:
    Arreglos();

    void generarNumerosRamdons();

    void generarCuadrado();

    void generarCubo();

    void printArrs();

    const int *getArr1() const;

    const int *getArr2() const;

    const int *getArr3() const;

private :
    int arr1[20];
    int arr2[20];
    int arr3[20];
};


#endif //EJERCICIOS1_ARREGLOS_H

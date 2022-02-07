//
// Created by santi on 05/02/2022.
//

#include "Arreglos.h"


const int *Arreglos::getArr1() const {
    return arr1;
}

const int *Arreglos::getArr2() const {
    return arr2;
}

const int *Arreglos::getArr3() const {
    return arr3;
}

void Arreglos::generarNumerosRamdons() {
    for (int i = 0; i <= 20; i++) {
        int random = (rand() % 20) + 1;
        arr1[i] = random;
    }
}


void Arreglos::generarCuadrado() {
    for (int i = 0; i <= 20; i++) {
        arr2[i] = pow(arr1[i], 2);
    }
}

void Arreglos::generarCubo() {
    for (int i = 0; i <= 20; i++) {
        arr3[i] = pow(arr1[i], 3);
    }
}


Arreglos::Arreglos() {

}

void Arreglos::printArrs() {
    cout
            << left
            << setw(20)
            << "Arreglo1"
            << left
            << setw(20)
            << "Arreglo 2"
            << left
            << setw(20)
            << "Arreglo 3"
            << endl;
    for (int i = 0; i <= 20; i++) {
        cout
                << left
                << setw(20)
                << arr1[i]
                << left
                << setw(20)
                << arr2[i]
                << left
                << setw(20)
                << arr3[i]
                << endl;
    }
}

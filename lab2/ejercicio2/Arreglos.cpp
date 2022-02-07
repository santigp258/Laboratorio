//
// Created by santi on 05/02/2022.
//

#include "Arreglos.h"

void Arreglos::generarNumerosRamdons() {
    for (int i = 0; i <= 20; i++) {
        int random = (rand() % 100) + 1;
        arr1[i] = random;
    }
}

const int *Arreglos::getArr1() const {
    return arr1;
}

const int *Arreglos::getArr2() const {
    return arr2;
}

Arreglos::Arreglos() {

}

void Arreglos::imprimirNumeros() {
    cout << "Numeros aleatorios ordenados" << endl;
    for (int i = 0; i <= 20; i++) {
        cout << arr2[i] << endl;
    }
}

void Arreglos::ordenarNumeros() {

    int lastpar = 0;
    int lastimpar = 20;

    for (int i = 0; i <= 20; i++) {
        if (arr1[i] % 2 == 0) {
            arr2[lastpar] = arr1[i];
            lastpar++;
        } else {
            arr2[lastimpar] = arr1[i];
            lastimpar--;
        }
    }

}



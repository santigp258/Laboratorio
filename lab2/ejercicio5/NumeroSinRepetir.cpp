//
// Created by santi on 020/02/2022.
//

#include "NumeroSinRepetir.h"

void NumeroSinRepetir::generarNumerosRamdons() {
    // en si se generaran 20 indices, pero en realidad estoy haciendo que la matriz tenga aproposito numeros repetidos
    for (int i = 0; i < 10; i++) {
        int random = (rand() % 10) + 1;
        numeros[i] = random;
        numeros[i + 10] = random;
    }
}

NumeroSinRepetir::NumeroSinRepetir() {

}

const int *NumeroSinRepetir::getNumeros() const {
    return numeros;
}

void NumeroSinRepetir::generarSinRepetir() {
    generarNumerosRamdons();
    // aux
    vector<int> aux;
    for (int i = 0; i < 20; ++i) {
        int num = numeros[i];
        if (!validarNumeros(num, aux)) {
            aux.push_back(num);
        }
    }
    cout << "El array generado:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << numeros[i] << " ----";
    }
    cout << "" << endl;
    cout << "El array sin numeros repetidos:" << endl;
    for (int i = 0; i < aux.size(); ++i) {
        cout << aux.at(i) << " ----";
    }
}

bool NumeroSinRepetir::validarNumeros(int num, vector<int> vector) {
    for (int j = 0; j < vector.size(); ++j) {
        if (num == vector.at(j)) {
            return true;
        }
    }

    return false;
}

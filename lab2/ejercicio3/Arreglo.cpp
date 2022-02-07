//
// Created by santi on 05/02/2022.
//

#include "Arreglo.h"

void Arreglo::pedirDatos() {

    do {
        cout << "Ingrese el numero de elementos (menos que 6): ";
        cin >> cantidad;
    } while (cantidad > 7 || cantidad < 0);

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese numero " << i << ": ";
        cin >> arregloA[i];
        suma += arregloA[i];
    }
    promedio = suma / cantidad;

    for (int i = 0; i < cantidad; i++) {
        if (arregloA[i] > promedio) {
            cantidadMayorAlPromedio++;
        }
    }
}

const int *Arreglo::getArregloA() const {
    return arregloA;
}

int Arreglo::getCantidad() const {
    return cantidad;
}

void Arreglo::setCantidad(int cantidad) {
    Arreglo::cantidad = cantidad;
}


Arreglo::Arreglo() {

}

double Arreglo::getPromedio() const {

    return promedio;
}

void Arreglo::setPromedio(double promedio) {
    Arreglo::promedio = promedio;
}


double Arreglo::getCantidadMayorAlPromedio() const {
    return cantidadMayorAlPromedio;
}

void Arreglo::setCantidadMayorAlPromedio(double cantidadMayorAlPromedio) {
    Arreglo::cantidadMayorAlPromedio = cantidadMayorAlPromedio;
}

double Arreglo::getSuma() const {
    return suma;
}

void Arreglo::setSuma(double suma) {
    Arreglo::suma = suma;
}

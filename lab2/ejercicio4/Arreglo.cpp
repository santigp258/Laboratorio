//
// Created by santi on 05/02/2022.
//

#include "Arreglo.h"

void Arreglo::generarNumerosRamdons() {
    for (int i = 0; i < 20; i++) {
        int random = (rand() % 20) + 1;
        arreglo[i] = random;
    }
}

Arreglo::Arreglo() {

}

void Arreglo::indicarCantidadEstudiantes() {
    for (int i = 0; i < 20; i++) {
        double nota = arreglo[i];
        if ((nota > 0 && nota <= 5) || nota < 0) {
            deficientes++;
        } else if (nota > 5 && nota <= 10) {
            regulares++;
        } else if (nota > 10 && nota <= 15) {
            buenos++;
        } else if (nota > 15 && nota <= 20) {
            excelentes++;
        }
    }
}

void Arreglo::imprimiResultados() {
    indicarCantidadEstudiantes();
    cout << "Las notas son" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arreglo[i] << ',';
    }

    cout << "" << endl;

    cout << "Los notas se claficarian de la siguiente manera:" << endl;

    cout
            << left
            << setw(20)
            << "Deficientes"
            << left
            << setw(20)
            << "Regulares"
            << left
            << setw(20)
            << "Buenos"
            << left
            << setw(20)
            << "Excelentes"
            << endl;

    cout
            << left
            << setw(20)
            << deficientes
            << left
            << setw(20)
            << regulares
            << left
            << setw(20)
            << buenos
            << left
            << setw(20)
            << excelentes
            << endl;

}

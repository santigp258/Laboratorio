#include <iostream>
#include "Persona.h"

using namespace std;


int main() {


    double tiempo;
    int numPulsaciones, edad, genero;


    //input de datos
    cout << "***** CALCULADORA DE PULSACIONES ***** " << endl;

    //numPulsaciones
    cout << "Ingresar la cantidad de pulsaciones por segundo: " << endl;
    cin >> numPulsaciones;

    //numPulsaciones
    cout << "Ingresar edad" << endl;
    cin >> edad;

    //genero
    cout << "Genero: \n Masculino = 0 \n Femenino = 1" << endl;
    cin >> genero;

    //instance
    Persona persona = Persona(edad, genero);



    cout << "El numero de pulsaciones que debe tener una persona con: \n" << endl;
    cout << "Sexo: " << genero<< endl;
    cout << "Edad: " << edad<< endl;
    cout << "Numero de pulsaciones por segundo: " << numPulsaciones<< endl;
    cout << " Es: "<< persona.calcularPulsaciones(numPulsaciones) << endl;

    return 0;
}

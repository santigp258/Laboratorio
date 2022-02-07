//
// Created by santi on 12/12/2021.
//

#include "Persona.h"

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}

int Persona::getGenero() const {
    return genero;
}

void Persona::setGenero(int genero) {
    Persona::genero = genero;
}

Persona::Persona(int edad, int genero) {
    Persona::edad = edad;
    Persona::genero = genero;
}

double Persona::calcularPulsaciones(double tiempo) {
    if (getGenero() == hombre) {
        return (pulsacionHombre - getEdad()) / tiempo;
    }
    return (pulsacionMujer - getEdad()) / tiempo;
}

//
// Created by santi on 06/12/2021.
//

#include "estudiante.h"

const string &Estudiante::getId() const {
    return id;
}

void Estudiante::setId(const string &id) {
    Estudiante::id = id;
}

const string &Estudiante::getNombre() const {
    return nombre;
}

void Estudiante::setNombre(const string &nombre) {
    Estudiante::nombre = nombre;
}

const string &Estudiante::getSexo() const {
    return sexo;
}

void Estudiante::setSexo(const string &sexo) {
    Estudiante::sexo = sexo;
}

double Estudiante::getPeso() const {
    return peso;
}

void Estudiante::setPeso(double peso) {
    Estudiante::peso = peso;
}

double Estudiante::getAltura() const {
    return altura;
}

void Estudiante::setAltura(double altura) {
    Estudiante::altura = altura;
}

Estudiante::Estudiante(const string &id, const string &nombre, const string &sexo, double peso, double altura) {
    Estudiante::id = id;
    Estudiante::nombre = nombre;
    Estudiante::sexo = sexo;
    Estudiante::peso = peso;
    Estudiante::altura = altura;
}

Estudiante::Estudiante() {

}

//
// Created by santi on 12/12/2021.
//

#include "Propietario.h"

const string &Propietario::getId() const {
    return id;
}

void Propietario::setId(const string &id) {
    Propietario::id = id;
}

const string &Propietario::getNombre() const {
    return nombre;
}

void Propietario::setNombre(const string &nombre) {
    Propietario::nombre = nombre;
}

const string &Propietario::getDireecion() const {
    return direecion;
}

void Propietario::setDireecion(const string &direecion) {
    Propietario::direecion = direecion;
}

const string &Propietario::getTel() const {
    return tel;
}

void Propietario::setTel(const string &tel) {
    Propietario::tel = tel;
}

Propietario::Propietario() {}

//
// Created by santi on 20/12/2021.
//

#include "Cliente.h"


Cliente::Cliente(const string &id, const string &nombre, const string &direccion, const string &telefono) {

    Cliente::id=id;
    Cliente::nombre=nombre;
    Cliente::direccion=direccion;
    Cliente::telefono=telefono;

}

Cliente::Cliente() {

}

Cliente::~Cliente() {

}

const string &Cliente::getId() const {
    return id;
}

void Cliente::setId(const string &id) {
    Cliente::id = id;
}

const string &Cliente::getNombre() const {
    return nombre;
}

void Cliente::setNombre(const string &nombre) {
    Cliente::nombre = nombre;
}

const string &Cliente::getDireccion() const {
    return direccion;
}

void Cliente::setDireccion(const string &direccion) {
    Cliente::direccion = direccion;
}

const string &Cliente::getTelefono() const {
    return telefono;
}

void Cliente::setTelefono(const string &telefono) {
    Cliente::telefono = telefono;
}



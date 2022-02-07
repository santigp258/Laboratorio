//
// Created by santi on 12/12/2021.
//

#include "Fabrica.h"

const string &Fabrica::getNit() const {
    return nit;
}

void Fabrica::setNit(const string &nit) {
    Fabrica::nit = nit;
}

const string &Fabrica::getNombre() const {
    return nombre;
}

void Fabrica::setNombre(const string &nombre) {
    Fabrica::nombre = nombre;
}

const string &Fabrica::getDireccion() const {
    return direccion;
}

void Fabrica::setDireccion(const string &direccion) {
    Fabrica::direccion = direccion;
}

const string &Fabrica::getTel() const {
    return tel;
}

void Fabrica::setTel(const string &tel) {
    Fabrica::tel = tel;
}

const double &Fabrica::getPromGanDia() const {
    return promGanDia;
}

void Fabrica::setPromGanDia(const double &promGanDia) {
    Fabrica::promGanDia = promGanDia;
}


const vector<double> &Fabrica::getMediciones() const {
    return mediciones;
}

void Fabrica::setMediciones(const double &medicion) {
    Fabrica::mediciones.push_back(medicion);
}

const string &Fabrica::getIdPropietario() const {
    return idPropietario;
}

void Fabrica::setIdPropietario(const string &idPropietario) {
    Fabrica::idPropietario = idPropietario;
}


Fabrica::Fabrica() {

}


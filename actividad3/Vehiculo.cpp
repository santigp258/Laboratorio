//
// Created by DELL on 10/12/2021.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo(const string &placa, const string &color, const string &modelo, const int &tipo, double &km) {

    Vehiculo::placa = placa;
    Vehiculo::color = color;
    Vehiculo::modelo = modelo;
    Vehiculo::tipo = tipo;
    Vehiculo::km = km;
}

Vehiculo::Vehiculo() {

}

const string &Vehiculo::getPlaca() const {
    return placa;
}

void Vehiculo::setPlaca(const string &placa) {
    Vehiculo::placa = placa;
}

const string &Vehiculo::getColor() const {
    return color;
}

void Vehiculo::setColor(const string &color) {
    Vehiculo::color = color;
}

const string &Vehiculo::getModelo() const {
    return modelo;
}

void Vehiculo::setModelo(const string &modelo) {
    Vehiculo::modelo = modelo;
}

const int &Vehiculo::getTipo() const {
    return tipo;
}

void Vehiculo::setTipo(const int &tipo) {
    Vehiculo::tipo = tipo;
}


double Vehiculo::getKm() const {
    return km;
}

void Vehiculo::setKm(double km) {
    Vehiculo::km = km;
}

double Vehiculo::getToneladasCamion() const {
    return toneladasCamion;
}

void Vehiculo::setToneladasCamion(double toneladasCamion) {
    Vehiculo::toneladasCamion = toneladasCamion;
}

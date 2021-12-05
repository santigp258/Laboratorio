//
// Created by santi on 04/12/2021.
//

#include "empleado.h"

Empleado::Empleado(const string &id, const string &nombre, const string &direccion, const string &telefono,
                   int aniosAnt, double sueldoPorAnio) {

    Empleado::id = id;
    Empleado::nombre = nombre;
    Empleado::direccion = direccion;
    Empleado::telefono = telefono;
    Empleado::aniosAnt = aniosAnt;
    Empleado::sueldoPorAnio = sueldoPorAnio;
    Empleado::pagoMensual = sueldoPorAnio / 12;


}

Empleado::Empleado() {

}


const string &Empleado::getId() const {
    return id;
}

void Empleado::setId(const string &id) {
    Empleado::id = id;
}

const string &Empleado::getNombre() const {
    return nombre;
}

void Empleado::setNombre(const string &nombre) {
    Empleado::nombre = nombre;
}

const string &Empleado::getDireccion() const {
    return direccion;
}

void Empleado::setDireccion(const string &direccion) {
    Empleado::direccion = direccion;
}

const string &Empleado::getTelefono() const {
    return telefono;
}

void Empleado::setTelefono(const string &telefono) {
    Empleado::telefono = telefono;
}

int Empleado::getAniosAnt() const {
    return aniosAnt;
}

void Empleado::setAniosAnt(int aniosAnt) {
    Empleado::aniosAnt = aniosAnt;
}




double Empleado::getSueldoPorAnio() const {
    return sueldoPorAnio;
}

void Empleado::setSueldoPorAnio(double sueldoPorAnio) {
    Empleado::sueldoPorAnio = sueldoPorAnio;
}

void Empleado::setPagoMensual(double &pagoMensual) {

}

const double &Empleado::getPagoMensual() const {
    return pagoMensual;
}




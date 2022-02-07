//
// Created by santi on 04/12/2021.
//

#ifndef ACTIVIDAD1_EMPLEADO_H
#define ACTIVIDAD1_EMPLEADO_H
#include <iostream>

using namespace std;

class Empleado {
public:
    Empleado(const string &id, const string &nombre, const string &direccion, const string &telefono, int aniosAnt,
             double sueldoPorAnio);
    Empleado();

    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getDireccion() const;

    void setDireccion(const string &direccion);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    int getAniosAnt() const;

    void setAniosAnt(int aniosAnt);


    const double &getPagoMensual() const;
    void setPagoMensual(double &pagoMensual);

    double getSueldoPorAnio() const;

    void setSueldoPorAnio(double sueldoPorAnio);

private:
    string id;
    string nombre;
    string direccion;
    string telefono;
    int aniosAnt;
    double pagoMensual;
    double sueldoPorAnio;


};


#endif //ACTIVIDAD1_EMPLEADO_H

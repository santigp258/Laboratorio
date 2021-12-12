//
// Created by santi on 12/12/2021.
//

#ifndef ACTIVIDAD4_FABRICA_H
#define ACTIVIDAD4_FABRICA_H
#include<iostream>
#include <vector>

using namespace std;

class Fabrica {
public:
    Fabrica();
    const string &getNit() const;

    void setNit(const string &nit);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getDireccion() const;

    void setDireccion(const string &direccion);

    const string &getTel() const;

    void setTel(const string &tel);

    const double & getPromGanDia() const;

    void setPromGanDia(const double &promGanDia);

    const vector<double> &getMediciones() const;

    void setMediciones(const double &medicion);

    const string &getIdPropietario() const;

    void setIdPropietario(const string &idPropietario);



private:
    string nit;
    string nombre;
    string direccion;
    string tel;
    double promGanDia;
    string idPropietario;
    vector<double> mediciones;

};


#endif //ACTIVIDAD4_FABRICA_H

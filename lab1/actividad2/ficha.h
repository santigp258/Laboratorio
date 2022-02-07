//
// Created by santi on 06/12/2021.
//

#ifndef ACTIVIDAD2_FICHA_H
#define ACTIVIDAD2_FICHA_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
#include <chrono>
#include "estudiante.h"
using namespace std;

class Ficha {
public:

    Ficha(const Estudiante &estudiante);
    Ficha();

    const string &getCodigoFicha() const;

    void setCodigoFicha(const string &codigoFicha);

    const string &getFecha() const;

    void setFecha(const string &fecha);

    double getCantidadPro() const;

    void setCantidadPro(double cantidadPro);

    double getCantidadCarb() const;

    void setCantidadCarb(double cantidadCarb);

    string obtenerFechaActual();

    void generarFicha();

    string generarCodigoFicha();

    void calcularCantidadConsumir();

    const string &getSexoEstudiante() const;

    void setSexoEstudiante(const string &sexoEstudiante);

    const Estudiante &getEstudiante() const;

    void setEstudiante(const Estudiante &estudiante);


private:
    string codigoFicha;
    string fecha;
    double cantidadPro;
    double cantidadCarb;
    Estudiante estudiante;
};


#endif //ACTIVIDAD2_FICHA_H

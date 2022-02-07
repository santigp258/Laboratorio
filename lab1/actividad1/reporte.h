//
// Created by santi on 04/12/2021.
//

#ifndef ACTIVIDAD1_REPORTE_H
#define ACTIVIDAD1_REPORTE_H

#include <ctime>
#include "empleado.h"
#include <iostream> //cout cin
#include <stdlib.h>

using namespace std;

class Reporte {
public:
    Reporte(Empleado empleado);

    Reporte();

    void imprimirReporte();


private:
    string fecha;
    int numeroReporte;
    Empleado empleado;
    void obtenerFechaActual();
    double calcularAunmento();

};

#endif //ACTIVIDAD1_REPORTE_H

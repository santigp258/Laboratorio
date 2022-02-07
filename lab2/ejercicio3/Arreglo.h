//
// Created by santi on 05/02/2022.
//

#ifndef EJERCICIO3_ARREGLO_H
#define EJERCICIO3_ARREGLO_H

#include <iostream>

using namespace std;

class Arreglo {
public:
    Arreglo();

    void pedirDatos();

public:
    const int *getArregloA() const;

    int getCantidad() const;

    void setCantidad(int cantidad);

    const int *getArregloB() const;

    double getPromedio() const;

    void setPromedio(double promedio);

    double getMayor() const;

    void setMayor(double mayor);

    double getCantidadMayorAlPromedio() const;

    void setCantidadMayorAlPromedio(double cantidadMayorAlPromedio);

    double getSuma() const;

    void setSuma(double suma);

private:
    int arregloA[6];
    int cantidad;
    double promedio;
    double cantidadMayorAlPromedio = 0;
    double suma;
};


#endif //EJERCICIO3_ARREGLO_H

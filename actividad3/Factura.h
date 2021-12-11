#ifndef ACTIVIDAD3_FACTURA_H
#define ACTIVIDAD3_FACTURA_H

#include<iostream>
#include"Vehiculo.h"
#include <iomanip>
#include <ctime>
#include <random>
#include <chrono>

using namespace std;

class Factura {
public:
    Factura();

    Factura(const Vehiculo &vehiculo);

    string getNFactura() const;

    void setNFactura(string nFactura);

    const string &getFecha() const;

    void setFecha(const string &fecha);

    double getImporte() const;

    void setImporte(double importe);

    double getKm() const;

    void setKm(double km);

    void generarFactura();


private:
    string nFactura;
    string fecha;
    double importe;
    Vehiculo vehiculo;
    string getFechaActual();
    string generarNumeroFactura();
    void generarImporte();
};


#endif //ACTIVIDAD3_FACTURA_H

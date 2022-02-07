//
// Created by santi on 12/12/2021.
//

#ifndef ACTIVIDAD4_REPORTE_H
#define ACTIVIDAD4_REPORTE_H

#include<iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <random>
#include <chrono>
using namespace std;

class Reporte {
public:
    Reporte();

    Reporte(const string &nitFabrica, const string &idPropietario);

    const string &getNumeroReporte() const;

    void setNumeroReporte(const string &numeroReporte);

    const string &getNitFabrica() const;

    void setNitFabrica(const string &nitFabrica);

    const string &getIdPropietario() const;

    void setIdPropietario(const string &idPropietario);

    const string &getFecha() const;

    void setFecha(const string &fecha);

    double getPromMediciones(const vector<double> value) const;

    const vector<double> &getMediciones() const;

    void setMediciones(const vector<double> &mediciones);

    void generarReporte() const;

    const double &getFabricaGanacias() const;

    void setFabricaGanacias(const double &fabricaGanacias);

private:
    string numeroReporte;
    string nitFabrica;
    string idPropietario;
    string fecha;
    double fabricaGanacias;
    vector<double> mediciones;
    const string obtenerFechaActual();
    string generarNumeroReporte();
    string getCalidadAire(const double indice) const;
};


#endif //ACTIVIDAD4_REPORTE_H

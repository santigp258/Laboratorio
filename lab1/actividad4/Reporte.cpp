//
// Created by santi on 12/12/2021.
//

#include "Reporte.h"

const string &Reporte::getNumeroReporte() const {
    return numeroReporte;
}

void Reporte::setNumeroReporte(const string &numeroReporte) {
    Reporte::numeroReporte = numeroReporte;
}

const string &Reporte::getNitFabrica() const {
    return nitFabrica;
}

void Reporte::setNitFabrica(const string &nitFabrica) {
    Reporte::nitFabrica = nitFabrica;
}

const string &Reporte::getIdPropietario() const {
    return idPropietario;
}

void Reporte::setIdPropietario(const string &idPropietario) {
    Reporte::idPropietario = idPropietario;
}

const string &Reporte::getFecha() const {
    return fecha;
}

void Reporte::setFecha(const string &fecha) {
    Reporte::fecha = fecha;
}

const vector<double> &Reporte::getMediciones() const {
    return mediciones;
}

void Reporte::setMediciones(const vector<double> &mediciones) {
    Reporte::mediciones = mediciones;
}

const double &Reporte::getFabricaGanacias() const {
    return fabricaGanacias;
}

void Reporte::setFabricaGanacias(const double &fabricaGanacias) {
    Reporte::fabricaGanacias = fabricaGanacias;
}


string Reporte::generarNumeroReporte() {

    auto t = chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand gen(static_cast<unsigned int>(t));
    auto codigoFicha = gen() % 100;

    return to_string(codigoFicha);
}

const string Reporte::obtenerFechaActual() {
    stringstream transTime;
    time_t const now_c = time(NULL);
    transTime << put_time(localtime(&now_c), "%a %d %b %Y - %I:%M:%S%p");

    return transTime.str();
}


double Reporte::getPromMediciones(const vector<double> value) const {
    double prom;

    for (int i = 0; i < value.size(); i++) {
        prom += value[i];
    }
    return prom / value.size();
}

string Reporte::getCalidadAire(const double indice) const {
    if (indice < 0)return "NO APLICA";

    if (indice >= 0 && indice <= 50) {
        return "BUENA";
    } else if (indice >= 51 && indice <= 100) {
        return "REGULAR";
    } else if (indice >= 101 && indice <= 150) {
        return "MALA";
    } else if (indice >= 151 && indice <= 200) {
        return "MUY MALA";
    }

    return "EXTREMADAMENTE ALTA";
};

void Reporte::generarReporte() const {
    cout << "****** Informacion de reporte ***** \n" << endl;
    cout << "Fecha: " << getFecha() << endl;
    cout << "Numero de reporte: " << getNumeroReporte() << endl;
    cout << "Nit de la fabrica: " << getNitFabrica() << endl;
    cout << "Identificacion del propietario: : " << getIdPropietario() << endl;
    double prom = getPromMediciones(getMediciones());
    if (prom > 170) {
        double multa = getFabricaGanacias() * 0.50;
        cout << "MULTA: : Detener produción por una semana. Si se omite se otorgara una multa de: \n "
             << multa << endl;
        cout << "Dinero perdido 0" << getFabricaGanacias() - multa << endl;

    } else {
        cout << "Multa: NO APLICA" << endl;
        cout << "Dinero perdido 0" << endl;
    }

    cout << "Calidad del aire " << getCalidadAire(prom) << endl;

};

Reporte::Reporte(const string &nitFabrica, const string &idPropietario) {
    Reporte::nitFabrica = nitFabrica;
    Reporte::numeroReporte = generarNumeroReporte();
    Reporte::idPropietario = idPropietario;
    Reporte::fecha = obtenerFechaActual();
}


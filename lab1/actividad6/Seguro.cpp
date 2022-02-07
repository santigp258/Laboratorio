//
// Created by santi on 20/12/2021.
//


#include "Seguro.h"


Seguro::Seguro(double montSeguro, int nCuotas, Cliente cliente) {
    Seguro::montSeguro = montSeguro;
    Seguro::nSeguro = generarNSeguro();
    Seguro::nCuotas = nCuotas;
    Seguro::cliente = cliente;

}

Seguro::Seguro() {

}

Seguro::~Seguro() {

}

string Seguro::getNSeguro() const {
    return Seguro::nSeguro;
}

void Seguro::setNSeguro(string nSeguro) {
    Seguro::nSeguro = nSeguro;
}

double Seguro::getMontSeguro() const {
    return montSeguro;
}

void Seguro::setMontSeguro(double montSeguro) {
    Seguro::montSeguro = montSeguro;
}

double Seguro::getVInicial() const {
    return vInicial;
}

void Seguro::setVInicial(const double vInicial) {
    Seguro::vInicial = vInicial;
}

int Seguro::getNCuotas() const {
    return nCuotas;
}

void Seguro::setNCuotas(int nCuotas) {
    Seguro::nCuotas = nCuotas;
}

double Seguro::getVCuotas() const {
    return vCuotas;
}

void Seguro::setVCuotas(double vCuotas) {
    Seguro::vCuotas = vCuotas;
}

double Seguro::calValorInicial() {

    if (getMontSeguro() < 50000000) {
        return (getMontSeguro() * 0.03);
    } else if (getMontSeguro() > 50000000) {
        return getMontSeguro() * 0.07;
    }

    return 0;
}

string Seguro::generarNSeguro() {

    auto t = chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand gen(static_cast<unsigned int>(t));
    auto numeroSeguro = gen() % 100;

    return to_string(numeroSeguro);

}

double Seguro::valorCuotas() {
    return (getMontSeguro() - getVInicial()) / getNCuotas();
}

void Seguro::reporteSeguro() {

    cout << "****** Informacion del cliente ***** \n" << endl;
    cout << "Numero de identificacion: " << getCliente().getId() << endl;
    cout << "Nombre: " << getCliente().getNombre() << endl;
    cout << "Direccion: " << getCliente().getDireccion() << endl;
    cout << "Telefono: " << getCliente().getTelefono() << endl;

    cout << "\n***** Seguro #" << getNCuotas() << " *****\n" << endl;
    cout.setf(ios::fixed);
    cout << "Numero: " << generarNSeguro() << endl;
    cout << "Monto: ";
    cout << setprecision(0) << getMontSeguro();
    cout << "\n Identificacion del cliente: " << getCliente().getId() << endl;
    double initiaValid = calValorInicial();
    cout << "Valor inicial: ";
    cout << setprecision(0) << initiaValid;
    cout << "\n Numero de cuotas: " << getNCuotas() << endl;
    cout << "Valor de la cuota: ";
    cout << setprecision(0) << valorCuotas();

}

const Cliente &Seguro::getCliente() const {
    return cliente;
}

void Seguro::setCliente(const Cliente &cliente) {
    Seguro::cliente = cliente;
}



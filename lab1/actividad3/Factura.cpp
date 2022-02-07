//
// Created by DELL on 9/12/2021.
//

#include "Factura.h"

Factura::Factura() {

}

Factura::Factura(const Vehiculo &vehiculo) {

    Factura::fecha = getFechaActual();
    Factura::nFactura = generarNumeroFactura();
    Factura::vehiculo = vehiculo;


}

string Factura::getNFactura() const {
    return nFactura;
}

void Factura::setNFactura(string nFactura) {
    Factura::nFactura = nFactura;
}

const string &Factura::getFecha() const {
    return fecha;
}

void Factura::setFecha(const string &fecha) {
    Factura::fecha = fecha;
}

double Factura::getImporte() const {
    return importe;
}

void Factura::setImporte(double importe) {
    Factura::importe = importe;
}

string Factura::getFechaActual() {

    stringstream transTime;
    time_t const now_c = time(NULL);
    transTime << put_time(localtime(&now_c), "%a %d %b %Y - %I:%M:%S%p");

    return transTime.str();

}

string Factura::generarNumeroFactura() {

    auto t = chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand gen(static_cast<unsigned int>(t));
    auto numeroFactura = gen() % 100;

    return to_string(numeroFactura);
}

void Factura::generarImporte() {

    double km = vehiculo.getKm();

    switch (vehiculo.getTipo()) {

        case camion:
            setImporte((450 * km) + (vehiculo.getToneladasCamion() * 500));
            break;
        case moto:
            setImporte(350 * km);
            break;
        case carro:
            setImporte(350 * km);
            break;
        case bicicleta:
            setImporte(200 * km);
            break;
        default:
            break;

    }

}

void Factura::generarFactura() {

    generarImporte();

        cout << "****** Informacion del vehiculo ***** \n" << endl;
        cout << "Placa: " << vehiculo.getPlaca() << endl;
        cout << "Color: " << vehiculo.getColor() << endl;
        cout << "Modelo: " << vehiculo.getModelo() << endl;

        cout << "\n***** Factura #" << getNFactura() << " *****\n" << endl;
        cout << "Fecha " << getFecha() << endl;
        cout << "Importe " << getImporte() << " USD \n" << endl;

}







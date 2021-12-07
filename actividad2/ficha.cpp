//
// Created by santi on 06/12/2021.

#include "ficha.h"

using namespace std;

Ficha::Ficha(const Estudiante &estudiante) {
    Ficha::fecha = obtenerFechaActual();
    Ficha::codigoFicha = generarCodigoFicha();
    Ficha::estudiante = estudiante;
}

Ficha::Ficha() {

}


const string &Ficha::getCodigoFicha() const {
    return codigoFicha;
}

void Ficha::setCodigoFicha(const string &codigoFicha) {
    Ficha::codigoFicha = codigoFicha;
}

const string &Ficha::getFecha() const {
    return fecha;
}

void Ficha::setFecha(const string &fecha) {
    Ficha::fecha = fecha;
}

double Ficha::getCantidadPro() const {
    return cantidadPro;
}

void Ficha::setCantidadPro(double cantidadPro) {
    Ficha::cantidadPro = cantidadPro;
}

double Ficha::getCantidadCarb() const {
    return cantidadCarb;
}

void Ficha::setCantidadCarb(double cantidadCarb) {
    Ficha::cantidadCarb = cantidadCarb;
}


string Ficha::obtenerFechaActual() {
    stringstream transTime;
    time_t const now_c = time(NULL);
    transTime << put_time(localtime(&now_c), "%a %d %b %Y - %I:%M:%S%p");

    return transTime.str();
}


string Ficha::generarCodigoFicha() {

    auto t = chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand gen(static_cast<unsigned int>(t));
    auto codigoFicha = gen() % 100;

    return to_string(codigoFicha);
}

const Estudiante &Ficha::getEstudiante() const {
    return estudiante;
}

void Ficha::setEstudiante(const Estudiante &estudiante) {
    Ficha::estudiante = estudiante;
}


void Ficha::generarFicha() {
    calcularCantidadConsumir();

    cout << "****** Informacion estudiante ***** \n" << endl;
    cout << "Estudiante: " << estudiante.getNombre() << endl;
    cout << "Identificacion: " << estudiante.getId() << endl;
    cout << "Peso: : " << estudiante.getPeso() << endl;
    cout << "Altura: : " << estudiante.getAltura() << endl;
    cout << "Sexo: : " << estudiante.getSexo() << endl;

    cout << "***** Ficha nutricional #" << getCodigoFicha() << " *****\n" << endl;
    cout << "Fecha " << getFecha() << "\n" << endl;
    cout << "Cantidad de proteinas a consumir " << getCantidadPro() << " g  \n" << endl;
    cout << "Cantidad de carbohidratos a consumir " << getCantidadCarb() << " g\n" << endl;
}


void Ficha::calcularCantidadConsumir() {
    string sexo = estudiante.getSexo();
    double altura = estudiante.getAltura();
    double peso = estudiante.getPeso();

    double proteina;
    double carbo;
    bool evaluarSexo = sexo == "M" || sexo == "m";

    if (evaluarSexo && altura >= 160 && peso >= 150) {
        proteina = altura * 0.45;
        carbo = peso * 0.50;
    } else if (evaluarSexo  && altura < 160 && peso < 150) {
        proteina = altura * 0.35;
        carbo = peso * 0.60;

    } else if (evaluarSexo  && altura >= 150 && peso >= 130) {
        proteina = altura * 0.30;
        carbo = peso * 0.75;

    } else if (evaluarSexo && altura < 150 && peso < 130) {
        proteina = altura * 0.40;
        carbo = peso * 0.65;
    } else {
      return  throw invalid_argument( "Los datos ingresados no cumplen con el criterio" );
    }

    setCantidadPro(proteina);
    setCantidadCarb(carbo);
}
















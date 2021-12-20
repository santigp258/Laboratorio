//
// Created by santi on 20/12/2021.
//

#ifndef ACTIVIDAD6_SEGURO_H
#define ACTIVIDAD6_SEGURO_H



#include "Cliente.h"
#include<iostream>
#include <iomanip>
#include <random>
#include <chrono>
using namespace std;

class Seguro {
public:
    Seguro(double montSeguro, int nCuotas, Cliente cliente);

    Seguro();

    string getNSeguro() const;

    void setNSeguro(string nSeguro);

    double getMontSeguro() const;

    void setMontSeguro(double montSeguro);

    double getVInicial() const;

    void setVInicial(const double vInicial);

    int getNCuotas() const;

    void setNCuotas(int nCuotas);

    double getVCuotas() const;

    void setVCuotas(double vCuotas);

    double calValorInicial();

    string generarNSeguro();

    double valorCuotas();

    void reporteSeguro();

    virtual ~Seguro();

    const Cliente &getCliente() const;

    void setCliente(const Cliente &cliente);

private:
    string nSeguro;
    double montSeguro;
    double vInicial;
    int nCuotas;
    double vCuotas;
    Cliente cliente;

public:


};


#endif //ACTIVIDAD6_SEGURO_H

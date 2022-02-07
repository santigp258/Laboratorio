
#ifndef ACTIVIDAD3_VEHICULO_H
#define ACTIVIDAD3_VEHICULO_H

#include<iostream>
#include"utils.cpp"

using namespace std;

class Vehiculo {
public:
    Vehiculo(const string &placa, const string &color, const string &modelo, const int &tipo, double &km);

    Vehiculo();

    const string &getPlaca() const;

    void setPlaca(const string &placa);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getModelo() const;

    void setModelo(const string &modelo);

    const int &getTipo() const;

    void setTipo(const int &tipo);

    double getKm() const;

    void setKm(double km);

    double getToneladasCamion() const;

    void setToneladasCamion(double toneladasCamion);

private:
    string placa;
    string color;
    string modelo;
    int tipo;
    double km;
    double toneladasCamion;
};


#endif //ACTIVIDAD3_VEHICULO_H

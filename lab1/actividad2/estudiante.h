//
// Created by santi on 06/12/2021.
//

#ifndef ACTIVIDAD2_ESTUDIANTE_H
#define ACTIVIDAD2_ESTUDIANTE_H

#include <iostream>
using namespace std;

class Estudiante {
public:
    Estudiante(const string &id, const string &nombre, const string &sexo, double peso, double altura);
    Estudiante();
    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getSexo() const;

    void setSexo(const string &sexo);

    double getPeso() const;

    void setPeso(double peso);

    double getAltura() const;

    void setAltura(double altura);

private:
    string id;
    string nombre;
    string sexo;
    double peso;
    double altura;

};


#endif //ACTIVIDAD2_ESTUDIANTE_H

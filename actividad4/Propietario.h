//
// Created by santi on 12/12/2021.
//

#ifndef ACTIVIDAD4_PROPIETARIO_H
#define ACTIVIDAD4_PROPIETARIO_H

#include<iostream>

using namespace std;


class Propietario {
public:
    Propietario();

    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getDireecion() const;

    void setDireecion(const string &direecion);

    const string &getTel() const;

    void setTel(const string &tel);

private:
    string id;
    string nombre;
    string direecion;
    string tel;

};


#endif //ACTIVIDAD4_PROPIETARIO_H

//
// Created by santi on 20/12/2021.
//

#ifndef ACTIVIDAD6_CLIENTE_H
#define ACTIVIDAD6_CLIENTE_H



#include<iostream>
using namespace std;

class Cliente {
public:
    Cliente(const string &id, const string &nombre, const string &direccion, const string &telefono);

    Cliente();

    const string &getId() const;

    void setId(const string &id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getDireccion() const;

    void setDireccion(const string &direccion);

    const string &getTelefono() const;

    void setTelefono(const string &telefono);

    virtual ~Cliente();

private:
    string id;
    string nombre;
    string direccion;
    string telefono;

public:



};


#endif //ACTIVIDAD6_CLIENTE_H

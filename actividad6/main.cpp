#include <iostream>
#include "Seguro.h"
#include "Cliente.h"

int main() {

    string id, nombre, direccion, telefono;
    double monto;
    int numCuotas;

    //id
    cout << "Ingresar identificacion: " << endl;
    getline(cin, id);

    //name
    cout << "Ingresar nombre: " << endl;
    getline(cin, nombre);

    //Direccion
    cout << "Ingresar Direccion: " << endl;
    getline(cin, direccion);

    //Numero telefonico
    cout << "Ingresar numero telefonico: " << endl;
    getline(cin, telefono);

    //Monto del seguro
    cout << "Ingresar monto del seguro: " << endl;
    cin >> monto;

    //Numero de cuotas
    cout << "Ingresar el numero de cuotas en que deseas pagar: " << endl;
    cin >> numCuotas;

    Cliente cliente = Cliente(id,nombre,direccion,telefono);
    Seguro seguro = Seguro(monto,numCuotas,cliente);


    seguro.reporteSeguro();

    return 0;
}

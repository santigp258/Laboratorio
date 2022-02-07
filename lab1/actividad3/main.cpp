#include <iostream>
#include <locale.h>

#include "Factura.h"
#include "Vehiculo.h"

using namespace std;


int main() {

    setlocale(LC_CTYPE, "Spanish");

    string placa, color, modelo;
    int tipo;
    double km,toneladas;

    //Placa
    cout << "Ingresar el numero de placa del vehiculo: " << endl;
    getline(cin, placa);

    //color
    cout << "Ingresar el color del vehiculo: " << endl;
    getline(cin, color);

    //modelo
    cout << "Ingresar el modelo del vehiculo: " << endl;
    getline(cin, modelo);

    //tipo
    cout << "Ingresar el tipo de vehiculo :\n0= camion\n1= moto\n2= carro\n3= bicicleta " << endl;
    cin>>tipo;
    Vehiculo vehiculo1 = Vehiculo(placa, color, modelo, tipo, km);
    if (tipo == camion){
        cout << "Ingresar peso de toneladas del camion" << endl;
        cin>>toneladas;
        vehiculo1.setToneladasCamion(toneladas);
    }

    //kilometros
    cout << "Ingresar los kilometros reccorrido en la autopista: " << endl;
    cin>>km;
    vehiculo1.setKm(km);

    //Vehiculo vehiculo1 = Vehiculo(AZB245, negro, Ford, carro, 200);
    Factura factura = Factura(vehiculo1);

    factura.generarFactura();

    return 0;
}
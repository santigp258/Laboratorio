#include <iostream>
#include <locale.h>

#include "empleado.h"
#include "reporte.h"

using namespace std;


int main() {

    setlocale(LC_CTYPE, "Spanish");

    string idEmpleado, nombre, direccion, telefono;
    int aniosAnt;
    double pagoAnual;

    cout << "Ingresar datos del trabajador " << endl;

    //id
    cout << "Ingresar identificacion " << endl;
    getline(cin, idEmpleado);

    //name
    cout << "Ingresar nombre" << endl;
    getline(cin, nombre);

    //address
    cout << "Ingresar Direccion" << endl;
    getline(cin, direccion);

    //cellphone number
    cout << "Ingresar numero telefono" << endl;
    getline(cin, telefono);

    //years
    cout << "Ingresar anios de antiguedad" << endl;
    cin >> aniosAnt;

    //salary
    cout << "Ingresar pago anual" << endl;
    cin >> pagoAnual;


    Empleado empleado = Empleado(idEmpleado, nombre, direccion, telefono, aniosAnt, pagoAnual);
    //Empleado empleado = Empleado("12", "Santi", "cra", "112233", 5, 50000);
    Reporte reporte = Reporte(empleado);

    reporte.imprimirReporte();
    return 0;
}

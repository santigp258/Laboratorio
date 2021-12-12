#include <iostream>
#include <locale.h>

#include "Fabrica.h"
#include "Propietario.h"
#include "Reporte.h"

using namespace std;


int main() {
    setlocale(LC_CTYPE, "Spanish");

    //propietario datos
    string propNomb, propDirecc, propTel, idProp;

    //fabrica datos
    string fabriNit, fabriNomb, fabriDirecc, fabriTel;
    int medicion1, medicion2, medicion3;
    double promGanDia;

    ///instancias
    Propietario propietario = Propietario();
    Fabrica fabrica = Fabrica();


    //input de datos
    cout << "***** DATOS DEL PROPIETARIO ***** " << endl;
    //idProp
    cout << "Ingresar la identificacion del propietario: " << endl;
    getline(cin, idProp);
    propietario.setId(idProp);

    //propNomb
    cout << "Ingresar el nombre del propietario: " << endl;
    getline(cin, propNomb);
    propietario.setNombre(propNomb);

    //propDirecc
    cout << "Ingresar la direccion del propietario: " << endl;
    getline(cin, propDirecc);
    propietario.setDireecion(propDirecc);

    //propTel
    cout << "Ingresar el telefono del propietario " << endl;
    getline(cin, propTel);
    propietario.setTel(propTel);
    cout << "************************** \n" << endl;

    fabrica.setIdPropietario(propietario.getId());
    cout << "***** DATOS DE LA FABRICA ***** " << endl;
    //fabriNit
    cout << "Ingresar el nit de la fabrica: " << endl;
    getline(cin, fabriNit);
    fabrica.setNit(fabriNit);

    //fabriNomb
    cout << "Ingresar el nombre de la fabrica: " << endl;
    getline(cin, fabriNomb);
    fabrica.setNombre(fabriNomb);

    //promGanDia
    cout << "Ingresar el promedio de las ganacias diarias: " << endl;
    cin >> promGanDia;
    fabrica.setPromGanDia(promGanDia);

    //fabriDirecc
    cout << "Ingresar la direccion de la fabrica: " << endl;
    getline(cin, fabriDirecc);
    fabrica.setDireccion(fabriDirecc);

    //fabriTel
    cout << "Ingresar el telefono de la fabrica " << endl;
    getline(cin, fabriTel);
    fabrica.setTel(fabriTel);

    // reporte
    Reporte reporte = Reporte(fabrica.getNit(), propietario.getId());

    //medicion1
    cout << "Puntos IMECA dia 1 " << endl;
    cin >> medicion1;
    fabrica.setMediciones(medicion1);


    //medicion2
    cout << "Puntos IMECA dia 2 " << endl;
    cin >> medicion2;
    fabrica.setMediciones(medicion2);

    //medicion3
    cout << "Puntos IMECA dia 3 " << endl;
    cin >> medicion3;
    fabrica.setMediciones(medicion3);

    reporte.setMediciones(fabrica.getMediciones());


    //output
    reporte.generarReporte();
    return 0;
}
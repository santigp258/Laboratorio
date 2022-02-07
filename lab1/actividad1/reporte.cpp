//
// Created by santi on 04/12/2021.
//
#include "reporte.h"

Reporte::Reporte(Empleado empleado) {
    Reporte::empleado = empleado;
    Reporte::obtenerFechaActual();
    Reporte::numeroReporte = rand() % 100;         // in the range 0 to 99
}

void Reporte::obtenerFechaActual() {
    time_t current_time;
    struct tm *time_info;
    char timeString[9];

    time(&current_time);
    time_info = localtime(&current_time);

    strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);

    fecha = timeString;
}

Reporte::Reporte() {

}

double Reporte::calcularAunmento() {
    int anios = empleado.getAniosAnt();
    int pagoMensual = empleado.getPagoMensual();
    double aumento;

    if (anios > 10) {
        aumento = pagoMensual + (pagoMensual * 0.10); // 10%
    } else if (anios >= 5 && anios < 10) {
        aumento = pagoMensual + (pagoMensual * 0.07); //7%
    } else if (anios >= 1 && anios < 3) {
        aumento = pagoMensual + (pagoMensual * 0.03); //3%
    }
    empleado.setPagoMensual(aumento);
    return aumento;

}

void Reporte::imprimirReporte() {
    double aumento = calcularAunmento();

    cout << "Numero de reporte " << numeroReporte << "\n" << endl;
    cout << "Fecha de reporte " << fecha << "\n" << endl;
    cout << "****** Informacion del empleado ***** \n" << endl;
    cout << "El empleado " << empleado.getNombre() << " le corresponde la identificacion con numero "
         << empleado.getId() << "\n" << endl;
    cout << "Pago mensual del empleado " << aumento << "\n" << endl;
}






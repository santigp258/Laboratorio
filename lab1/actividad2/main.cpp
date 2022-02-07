#include <iostream>
#include "estudiante.h"
#include "ficha.h"
using namespace std;


int main() {

    string idEstudiante, nombre, sexo;
    double altura, peso;

    //id
    cout << "Ingresar identificacion " << endl;
    getline(cin, idEstudiante);

    //name
    cout << "Ingresar nombre" << endl;
    getline(cin, nombre);

    //sexo
    cout << "Ingresar Sexo  (M O F)" << endl;
    getline(cin, sexo);

    //peso
    cout << "Ingresar peso (en libras)" << endl;
    cin >> peso;

    //altura
    cout << "Ingresar altura (cm)" << endl;
    cin >> altura;

    Estudiante estudiante = Estudiante(idEstudiante, nombre, sexo, peso, altura);

    Ficha ficha = Ficha(estudiante);


    ficha.generarFicha();


    return 0;
}

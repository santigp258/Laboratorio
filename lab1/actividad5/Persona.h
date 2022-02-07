//
// Created by santi on 12/12/2021.
//

#ifndef ACTIVIDAD5_PERSONA_H
#define ACTIVIDAD5_PERSONA_H

enum Genero {
    hombre = 0,
    mujer
};

enum Pulsacion{
    pulsacionHombre= 210,
    pulsacionMujer= 220,
};
class Persona {
public:
    Persona();

    Persona(int edad, int genero);

    int getEdad() const;

    void setEdad(int edad);

    int getGenero() const;

    void setGenero(int genero);

    double calcularPulsaciones(double tiempo);

private:
    int edad, genero;
};


#endif //ACTIVIDAD5_PERSONA_H

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include "Torre.h"

class Complejo{
    private:
        Torre torres[7];
        int cant_torres;
    public:
        static const int MAX_TORRES = 7;
        Complejo();
        void agregarTorre(Torre);
        int promedioHabitantesPorTorre();
        int cantidadHabitantes();
        void mostrarPromedioDeHabitantesPorPiso();
};
#include "Complejo.cpp"
#endif
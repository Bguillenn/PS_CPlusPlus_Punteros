#ifndef TORRE_H
#define TORRE_H

#include "Piso.h"

class Torre{
    private:
        Piso pisos[20];
        int cont_pisos;
    public:
        static const int MAX_PISOS = 20;
        Torre();
        void agregarPiso(Piso);
        int promedioHabitantesPorPiso();
        int cantidadHabitantes();
};

#include "Torre.cpp"
#endif 
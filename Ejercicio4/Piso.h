#ifndef PISO_H
#define PISO_H
#include "Depa.h"

class Piso{
    private:
        Depa dpts[6];
        int contDpts;
    public:
        static const int MAX_DPTS = 6;
        Piso();
        void rentarDepa(Depa);
        int promedioHabitantesPorDepa();
        int cantidadHabitantes();
};

#include "Piso.cpp"
#endif
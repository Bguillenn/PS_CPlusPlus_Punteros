#include "Piso.h"
#include <iostream>

using namespace std;

Piso::Piso(){
    this->contDpts = 0;
}

void Piso::rentarDepa(Depa dpt){
    if(contDpts >= Piso::MAX_DPTS) return;
    this->dpts[contDpts] = dpt;
    contDpts++;
}

int Piso::promedioHabitantesPorDepa(){
    return cantidadHabitantes()/(contDpts + 1);
}

int Piso::cantidadHabitantes(){
    int sum_hab = 0;
    for(int i = 0; i<= contDpts ; i++)
        sum_hab += this->dpts[i].getHabitantes();

    return sum_hab;
}
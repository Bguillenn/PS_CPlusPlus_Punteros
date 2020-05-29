#include "Piso.h"
#include <iostream>

using namespace std;

Torre::Torre(){
    //INICIALIZAMOS EN 0 LOS PISOS DE LA TORRE
    this->cont_pisos = 0;
}

void Torre::agregarPiso(Piso p){
    if(cont_pisos >= Torre::MAX_PISOS) return;
    this->pisos[cont_pisos] = p;
    this->cont_pisos++;
}

int Torre::promedioHabitantesPorPiso(){
    return cantidadHabitantes() / (cont_pisos+1);
}

int Torre::cantidadHabitantes(){
    int sum_hab = 0;
    for(int i=0; i<=cont_pisos;i++)
        sum_hab += pisos[i].cantidadHabitantes();
    
    return sum_hab;
}
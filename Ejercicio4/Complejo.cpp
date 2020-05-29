#include "Complejo.h"
#include <iostream>

using namespace std;

Complejo::Complejo(){
    this->cant_torres = 0;
}

void Complejo::agregarTorre(Torre t){
    if(cant_torres >= Complejo::MAX_TORRES) return;
    this->torres[cant_torres] = t;
    this->cant_torres++;
}

int Complejo::promedioHabitantesPorTorre(){
    return cantidadHabitantes() / (cant_torres + 1);
}

int Complejo::cantidadHabitantes(){
    int sum_hab;
    for(int i = 0; i <= cant_torres ; i++)
        sum_hab += torres[i].cantidadHabitantes();

    return sum_hab;
}

void Complejo::mostrarPromedioDeHabitantesPorPiso(){
    for(int i = 0 ; i <= cant_torres ;i++)
        cout<<"Torre "<<(i+1)<<" tiene un promedio de "<<torres[i].promedioHabitantesPorPiso()<<" por piso"<<endl;
}
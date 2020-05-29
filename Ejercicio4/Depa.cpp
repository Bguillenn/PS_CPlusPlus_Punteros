#include "Depa.h"
#include <iostream>

using namespace std;

Depa::Depa(){
    this->hab = 0;
}

Depa::Depa(int hab){
    setHabitantes(hab);
}

void Depa::setHabitantes(int hab){
    if(hab > Depa::MAX_HAB || hab < 1){
        cout<<"VALOR ERRONEO SE PUSO 1"<<endl;
        this->hab = 1;
    }else{
        this->hab = hab;
    }
}

int Depa::getHabitantes(){
    return this->hab;
}
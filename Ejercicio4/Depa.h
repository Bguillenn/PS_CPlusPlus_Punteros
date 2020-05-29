#ifndef DEPA_H
#define DEPA_H

class Depa{
    private:
        int hab;
    public:
        static const int MAX_HAB = 4;
        Depa();
        Depa(int);
        int getHabitantes();
        void setHabitantes(int hab);
};
#include "Depa.cpp"
#endif
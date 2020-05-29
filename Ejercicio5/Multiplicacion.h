#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

//DEFINIMOS NUESTRA CLASE QUE NOS ASISTIRA CON LA MULTIPLICACION
class Multiplicacion {
public:
    static int ** CrearMatriz(int fil, int col);
    static void Print(int fil, int col, int ** matriz);
    static void MultMat(int ** m1, int ** m2, int f1, int c1, int f2,int c2);
};

#include "Multiplicacion.cpp"
#endif 

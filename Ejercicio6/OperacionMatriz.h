#ifndef OPERACION_MATRIZ_H
#define OPERACION_MATRIZ_H

#pragma once
class OperacionMatriz {
public:
    static int **Transpuesta(int **matriz, int fil, int col);
    static void Print(int **matriz, int fil, int col);
    static bool Simetrica(int **matriz,int **matrizT,int fil);
    static bool TriangularS(int **matriz,int fil);
    static bool TriangularI(int **matriz,int fil);
};

#include "OperacionMatriz.cpp"
#endif

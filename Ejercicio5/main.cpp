#include <iostream>
#include "Multiplicacion.h"
using namespace std;

int main() {
    //Definimos las filas y columnnas de nuestra matriz
    int f1,c1,f2,c2;
    cout << "Matriz 1 \nFilas: ";
    cin >> f1;
    cout << "Columnas: ";
    cin >> c1;
    //La llenamos y imprimimos
    int ** m1 = Multiplicacion::CrearMatriz(f1,c1);
    Multiplicacion::Print(f1,c1,m1);
    //Definimos las filas y columas de la otra matriz
    cout << "Matriz 2 \nFilas: ";
    cin >> f2;
    cout << "Columnas: ";
    cin >> c2;
    //Creamos la matriz
    int ** m2 = Multiplicacion::CrearMatriz(f2,c2);
    Multiplicacion::Print(f2,c2,m2);
    // La multiplicamos y mostramos la respuesta
    Multiplicacion::MultMat(m1,m2,f1,c1,f2,c2);

    return 0;
}

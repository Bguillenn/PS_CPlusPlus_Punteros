#include "Multiplicacion.h"
#include <iostream>

using namespace std;

int ** Multiplicacion::CrearMatriz(int fil, int col) {
    int ** matriz = new int*[fil];
    for(int i=0;i<fil;i++){
        matriz[i] = new int [col];
    }
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            cout<<"Valor para posicion " << i+1<<" "<<j+1 << ": ";
            cin>> matriz[i][j];
        }
    }
    return matriz;
}
void Multiplicacion::Print(int fil, int col, int **matriz) {
    for(int i=0;i<fil;i++) {
        for (int j = 0; j < col; j++) {
            cout << matriz[i][j]<<" ";
        }
        cout <<endl;
    }
}
void Multiplicacion::MultMat(int **m1, int **m2, int f1, int c1, int f2,int c2) {
    if(c1 != f2){
        cout <<"ERROR: No se puede realizar la operación"<<endl;

    }else{

    //CREAMOS LA MATRIZ RESULTADO
       int **mR = new int*[f1];
       for(int i=0;i<f1;i++){
           mR[i] = new int [c2];
       }

       //REALIZAMOS LA MULTIPLICACION
      for(int i=0;i<f1;i++){
          for(int j=0;j<c2;j++){
              for(int k=0;k<f2;k++){
                  mR[i][j]+=m1[i][k] * m2[k][j];
              }
          }
      }

      //Imprimimos la respuesta
      cout << "La respuesta es: "<<endl;
        Multiplicacion::Print(f1,c2,mR);
    }



}
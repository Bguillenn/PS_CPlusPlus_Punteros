#include <iostream>

using namespace std;

const int NUM_FILAS = 3, NUM_COLUMN = 4;

//Esta funcion nos devuelve verdadero si esque la matriz tiene un punto de silla
//Y guarda el resultado en ps_f = Punto silla fila y ps_c = Punto Silla columna
bool puntoSilla(int[][NUM_COLUMN] ,int* ps_f, int* ps_c);
//VALIDA SI UN PUNTO ES EL PUNTO DE SILLA DE LA MATRIZ DEVUELVE TRUE SI LO ES
bool validarPunto(int[][NUM_COLUMN], int pos_f, int pos_c);

int main(){
    
    int posx, posy;
    int mat[NUM_FILAS][NUM_COLUMN] = {
        {5,4,1,3},
        {2,3,3,2},
        {1,5,0,1}
    };

    /*int mat[NUM_FILAS][NUM_COLUMN] = {
        {5,4,1,3},
        {2,3,0,2},
        {1,5,0,1}
    };*/

    if(puntoSilla(mat, &posx, &posy))
        cout<<"Se encontro un punto de silla en la posicion ("<<posx<<", "<<posy<<")"<<endl;
    else
        cout<<"La matriz no tiene punto de silla"<<endl;
    return 0;
}

bool puntoSilla(int mat[][NUM_COLUMN], int* ps_f, int* ps_c){

    //RECORREMOS LA MATRIZ EN BUSCA DE UN PUNTO QUE SEA PUNTO DE SILLA
    for(int i = 0; i<NUM_FILAS;i++)
        for(int j = 0; j<NUM_COLUMN;j++)
            if(validarPunto(mat,i,j)){
                *ps_f = i;
                *ps_c = j;
                return true;
            }

    return false;
}

bool validarPunto(int mat[][NUM_COLUMN], int pos_f, int pos_c){
    bool mayor_columna = true;
    bool menor_fila = true;

    int item = mat[pos_f][pos_c];
    
    for(int i=0; i<NUM_COLUMN;i++)
        if( mat[pos_f][i] < item) menor_fila = false; 
    for(int i=0; i<NUM_FILAS;i++)
        if( mat[i][pos_c] > item) mayor_columna = false;

    return mayor_columna && menor_fila;
}
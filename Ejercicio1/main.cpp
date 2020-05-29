#include <iostream>
#include <conio.h>

using namespace std;

//Definiciones de funciones
int factorial(int n);
int combinacion(int n, int k);
void mostrarTrianguloPascal(int n, int*);
void cargarTrianguloPascal(int n, int*);


int main(int argc, const char** argv) {

    int altura = 0;
    do{
        if(altura != 0) cout<<"ERROR: ingresa un numero en el rango establecido"<<endl;
        cout<<"Ingrese la altura del triangulo de pascal[1-100]: ";cin>>altura;
    } while (altura < 1 || altura > 100);
    
    int num_elementos = (altura*(altura+1))/2;

    int *arr_elementos = new int[num_elementos];
    cout<<endl;
    cargarTrianguloPascal(altura, arr_elementos);
    mostrarTrianguloPascal(altura, arr_elementos);
    cout<<endl;
    return 0;
}

int factorial(int n){
    if(n == 3) return 6;
    if(n == 2) return 2;
    if(n == 1) return 1;
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int combinacion(int n, int k){
    return (factorial(n))/(factorial(k)*factorial(n-k));
}

void cargarTrianguloPascal(int n, int *arr){
    int index_array = 0;
    for(int i=0;i<n;i++){
        for(int j=0; j<=i ; j++){
            arr[index_array] = combinacion(i,j);
            index_array++;
        }
    }
}

void mostrarTrianguloPascal(int n, int *arr){
    int index_array = 0 ;
    for(int i = 0;i<n;i++){
        for(int j = 0; j <= i;j++){
            cout<<arr[index_array]<<" ";
            index_array++;
        }
        cout<<endl;
    }
}
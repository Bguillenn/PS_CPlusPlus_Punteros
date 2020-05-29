#include "Depa.h"
#include "Piso.h"
#include "Torre.h"
#include "Complejo.h"
#include <iostream>

using namespace std;

int main(){
    //Crearemos un objeto de nuestra clase complejo
    Complejo complejo;

    //CREAREMOS UNA TORRE Y LA AÑADIREMOS TODO LO NECESARIO
    Torre t1;
    // 3 Pisos
    Piso t1p1, t1p2, t1p3;
    //Depas para cada piso
    Depa t1p1d1, t1p1d2, t1p2d1, t1p2d2, t1p3d1;
    t1p1d1.setHabitantes(3);
    t1p1d2.setHabitantes(2);
    t1p2d1.setHabitantes(4);
    t1p2d2.setHabitantes(1);
    t1p3d1.setHabitantes(2);
    //Añadimos los depas
    t1p1.rentarDepa(t1p1d1);
    t1p1.rentarDepa(t1p1d2);
    t1p2.rentarDepa(t1p2d1);
    t1p2.rentarDepa(t1p2d2);
    t1p3.rentarDepa(t1p3d1);
    //Añadimos los pisos
    t1.agregarPiso(t1p1);
    t1.agregarPiso(t1p2);
    t1.agregarPiso(t1p3);
    //Añadimos la torre al complejo
    complejo.agregarTorre(t1);

    //AHORA CREAMOS LA TORRE 2
    Torre t2;
    //Sus pisos
    Piso t2p1, t2p2;
    //Sus depas
    Depa t2p1d1,t2p1d2,t2p1d3,t2p1d4,t2p2d1,t2p2d2;
    t2p1d1.setHabitantes(4);
    t2p1d2.setHabitantes(3);
    t2p1d3.setHabitantes(2);
    t2p1d4.setHabitantes(1);
    t2p2d1.setHabitantes(3);
    t2p2d2.setHabitantes(4);
    //Añadimos los depas
    t2p1.rentarDepa(t2p1d1);
    t2p1.rentarDepa(t2p1d2);
    t2p1.rentarDepa(t2p1d3);
    t2p1.rentarDepa(t2p1d4);
    t2p2.rentarDepa(t2p2d1);
    t2p2.rentarDepa(t2p2d1);
    //Agregamos los pisos
    t2.agregarPiso(t2p1);
    t2.agregarPiso(t2p2);
    //Añadimos la torre al complejo
    complejo.agregarTorre(t2);

    //MOSTRAMOS LA CANTIDAD HABITANTES DEL COMPLEJO
    cout<<"Cantidad de habitantes del complejo "<<complejo.cantidadHabitantes()<<endl;
    //MOSTRAMOS EL PROMEDIO DE HABITANTES DEL COMPLEJO POR TORRE
    cout<<"Promedio de habitantes por torre del complejo "<<complejo.promedioHabitantesPorTorre()<<endl;
    //Mostramos la cantidad promedio de habitantes por el piso de cada torre del complejo
    complejo.mostrarPromedioDeHabitantesPorPiso();

    return 0;
}

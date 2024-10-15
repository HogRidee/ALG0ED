#include "funciones.h"

int calcularSoluciones(struct Efectivo *efectivos){
    struct Pila pila;
    construir(pila);
    struct Efectivo efectivo1;
    struct Efectivo efectivo2;
    int soluciones = 0;
    for(int i = NDAT-1; i >= 0; i--){
        apilar(pila, efectivos[i]);
        soluciones++;
    }
    while(not esPilaVacia(pila)){
        efectivo1 = desapilar(pila);
        efectivo2 = desapilar(pila);
        if(efectivo1.grado > efectivo2.grado){
            soluciones++;
        }
        else{
            if(efectivo1.tiempo > efectivo2.tiempo){
                apilar(pila, efectivo1);
                soluciones++;
            }
        }
    }
    return soluciones;
}
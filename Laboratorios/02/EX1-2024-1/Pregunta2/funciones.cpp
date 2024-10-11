#include "funciones.h"

void resolver(struct Pila &pila, char *ordenes){
    int i;
    apilar(pila, 1);
    for(i = 0; i < 7; i++){
        if(ordenes[i] == 'S'){
            while(not esPilaVacia(pila)){
                cout << desapilar(pila) << " ";
            }
            apilar(pila, i+2);
        }
        else{
            apilar(pila, i+2);
        }
    }
    while(not esPilaVacia(pila)){
        cout << desapilar(pila) << " ";
    }
}
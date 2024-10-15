#include "funciones.h"

void solucion(struct Pila &nautilus, char *ordenes){
    apilar(nautilus, 1);
    for(int i = 0; i < NORDENES; i++){
        if(ordenes[i] == 'S'){
            while(not esPilaVacia(nautilus)){
                cout << desapilar(nautilus) << " ";
            }
        }
        apilar(nautilus, i+2);
    }
    cout << desapilar(nautilus);
}
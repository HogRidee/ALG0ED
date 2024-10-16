#include "funciones.h"

//void ordenarCola(struct Cola &cola, int n){
//    for(int i = 1; i < n-1; i++){
//        struct Llegada mayor = desencolar(cola);
//        for(int j = 1; j < n-i; j++){
//            struct Llegada aux = desencolar(cola);
//            int minMayor = mayor.horasLlegada*60 + mayor.minutosLlegada;
//            int minAux = aux.horasLlegada*60 + aux.minutosLlegada;
//            if(minMayor > minAux)
//                encolar(cola, aux);
//            else{
//                encolar(cola, mayor);
//                mayor = aux;
//            }
//        }
//        encolar(cola, mayor);
//    }
//}

void ordenarCola(struct Cola &cola, int n){
    if(esColaVacia(cola)) return;
    struct Llegada mayor = desencolar(cola);
    int m = n;
    while(m > 1){
        struct Llegada aux = desencolar(cola);
        int minMayor = mayor.horasLlegada*60 + mayor.minutosLlegada;
        int minAux = aux.horasLlegada*60 + aux.minutosLlegada;
        if(minMayor > minAux)
            encolar(cola, aux);
        else{
            encolar(cola, mayor);
            mayor = aux;
        }
        m--;
    }
    ordenarCola(cola, n-1);
    encolar(cola, mayor);
}

void actualizarCola(struct Cola &cola, int n){
    for(int i = 0; i < n; i++){
        struct Llegada aux = desencolar(cola);
        if(aux.avion == 2101){
            aux.horasNuevo = 0;
            aux.minutosNuevo = 15;
        }
        if(aux.avion == 2105){
            aux.horasNuevo = 2;
            aux.minutosNuevo = 10;
        }
        encolar(cola, aux);
    }
}

void ordenarCola2(struct Cola &cola, int n){
    if(esColaVacia(cola)) return;
    
    struct Llegada mayor = desencolar(cola);
    int m = n;
    
    while(m > 1){  // Debería iterar hasta que quede un solo elemento
        struct Llegada aux = desencolar(cola);
        int minMayor = mayor.horasNuevo*60 + mayor.minutosNuevo;
        int minAux = aux.horasNuevo*60 + aux.minutosNuevo;
        
        if(minMayor > minAux)
            encolar(cola, aux);
        else {
            encolar(cola, mayor);
            mayor = aux;
        }
        m--;
    }
    ordenarCola2(cola, n-1);  // Llamada recursiva para los n-1 restantes
    encolar(cola, mayor);     // Encolar el mayor al final
}


//void ordenarCola2(struct Cola &cola, int n){
//    for(int i = 1; i < n-1; i++){
//        struct Llegada mayor = desencolar(cola);
//        for(int j = 1; j < n-i; j++){
//            struct Llegada aux = desencolar(cola);
//            int minMayor = mayor.horasNuevo*60 + mayor.minutosNuevo;
//            int minAux = aux.horasNuevo*60 + aux.minutosNuevo;
//            if(minMayor > minAux)
//                encolar(cola, aux);
//            else{
//                encolar(cola, mayor);
//                mayor = aux;
//            }
//        }
//        encolar(cola, mayor);
//    }
//}
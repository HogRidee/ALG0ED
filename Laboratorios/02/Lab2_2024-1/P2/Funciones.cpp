#include "Funciones.h"

struct Nodo *obtenerUltimo(struct Lista &lista){
    struct Nodo * recorrido = lista.cabeza;
    struct Nodo * anterior = nullptr;
    struct Nodo * ultimo;
    bool primeraVez = true;
    while(recorrido){
        if(primeraVez){
            primeraVez = false;
        }
        else{
            anterior = ultimo;
        }
        ultimo = recorrido;
        recorrido = recorrido->siguiente;
    }
    if(anterior == nullptr)
        lista.cabeza = nullptr;
    else
        anterior->siguiente = nullptr;
    return ultimo;
}

void hanoi(int n, struct Pila & desde, struct Pila & auxiliar, struct Pila & hacia){
    //CASO BASE
    if(n == 1){
        apilar(hacia, desapilar(desde));
        return;
    }
    hanoi(n-1, desde, hacia, auxiliar);
    apilar(hacia, desapilar(desde));
    hanoi(n-1, auxiliar, desde, hacia);   
}


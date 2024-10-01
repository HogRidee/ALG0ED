#include "Funciones.h"

void desvincularUltimoNodo(struct Lista & tad) {
    if (esListaVacia(tad)) return;
    struct Nodo* recorrido = tad.cabeza;
    struct Nodo* penultimo = nullptr;
    while(recorrido->siguiente != nullptr){
        penultimo = recorrido;
        recorrido = recorrido->siguiente;
    }
    if(penultimo == nullptr) 
        tad.cabeza = nullptr;
    else
        penultimo->siguiente = nullptr; 
}

void superHanoi(struct Pila &A, struct Pila &B, struct Pila &C, struct Pila &pila){
    
}
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
    struct Producto producto, productoA;
    producto = cima(pila);
    if(producto.peso == -1) apilar(pila, desapilar(A));
    else{
        productoA = cima(A);
        if(productoA.peso < producto.peso) apilar(pila, desapilar(A));
        else{
            
        }
    }
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


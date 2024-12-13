#include "funciones.h"

struct ArbolBinario aplicarArbol(struct ArbolBinarioBusqueda &arbolPaquetes, 
        struct ArbolBinario &arbolSistema){
    struct ArbolBinario arbolResultado;
    construir(arbolResultado);
    
    operarArboles(arbolPaquetes.arbolBinario.raiz, arbolSistema.raiz, arbolResultado.raiz);
    
    return arbolResultado;
}

void operarArboles(struct NodoArbol * nodoPaquetes, struct NodoArbol * nodoSistema, 
        struct NodoArbol *& nodoResultado){
    if(nodoPaquetes == nullptr) return;
    int numeroNodos = numeroNodosRecursivo(nodoSistema);
    int numeroHojas = numeroHojasRecursivo(nodoSistema);
    int nuevoElemento = nodoPaquetes->elemento + numeroNodos - numeroHojas;
    plantarArbolBinario(nodoResultado, nullptr, nuevoElemento, nullptr);
    operarArboles(nodoPaquetes->izquierda, nodoSistema->izquierda, nodoResultado->izquierda);
    operarArboles(nodoPaquetes->derecha, nodoSistema->derecha, nodoResultado->derecha);
}

bool detectarAnomalia(struct ArbolBinario arbolResultado){
    if(esABB(arbolResultado.raiz, arbolResultado) and sumaNodos(arbolResultado.raiz)%2==0){
        return true;
    }
    return false;
}

bool esABB(struct NodoArbol * nodoResultado, struct ArbolBinario arbolResultado){
    if(nodoResultado == nullptr or nodoResultado->derecha == nullptr or 
            nodoResultado->izquierda == nullptr){
        return true;
    }
    if(buscarElemento(arbolResultado.raiz, nodoResultado->elemento) > 1)
        return false;
}

int buscarElemento(struct NodoArbol * nodoResultado, int elemento){
    
}

int sumaNodos(struct NodoArbol * nodoResultado){
    
}
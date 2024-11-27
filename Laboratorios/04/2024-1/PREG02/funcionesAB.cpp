/* 
 * File:   funcionesAB.cpp
 * Author: ANA RONCAL
 * 
 * Created on 27 de octubre de 2024, 17:00
 */

#include <iostream>
#include <iomanip>
#include "ArbolB.h"
using namespace std;
#include "funcionesAB.h"

void construir(struct ArbolBinario & arbol) {
    arbol.raiz = nullptr;
}

bool esNodoVacio(struct NodoArbol * raiz) {
    return raiz == nullptr;
}

bool esArbolVacio(const struct ArbolBinario & arbol) {
    return esNodoVacio(arbol.raiz);
}

struct NodoArbol * crearNuevoNodo(struct NodoArbol * izquierda, struct Elemento elemento,
        struct NodoArbol * derecha) {

    struct NodoArbol * nuevo = new struct NodoArbol;
    nuevo->derecha = derecha;
    nuevo->izquierda = izquierda;
    nuevo->elemento = elemento;
    return nuevo;
}

void plantarArbolBinario(struct ArbolBinario & arbol, struct NodoArbol * izquierda, 
                         struct Elemento elemento, struct NodoArbol * derecha) {
    
    struct NodoArbol * nuevoNodo = crearNuevoNodo(izquierda, elemento, derecha);
    arbol.raiz = nuevoNodo;

}

void plantarArbolBinario(struct NodoArbol *& raiz, 
                    struct NodoArbol * izquierda, struct Elemento elemento, 
                    struct NodoArbol * derecha){
    
    struct NodoArbol * nuevoNodo = crearNuevoNodo(izquierda, elemento, derecha);
    raiz = nuevoNodo;
}

void plantarArbolBinario(struct ArbolBinario & arbol, struct ArbolBinario & arbolIzquierda, 
                         struct Elemento elemento, struct ArbolBinario & arbolDerecha) {
    struct NodoArbol * nuevoNodo = crearNuevoNodo(arbolIzquierda.raiz, elemento,
            arbolDerecha.raiz);
    arbol.raiz = nuevoNodo;

}


void recorrerPreOrdenRecursivo(struct NodoArbol * nodo){
    if(not esNodoVacio(nodo)){
        imprimirNodo(nodo);
        recorrerPreOrdenRecursivo(nodo->izquierda);
        recorrerPreOrdenRecursivo(nodo->derecha);
    }
}

void recorrerPreOrden(const struct ArbolBinario & arbol){
    recorrerPreOrdenRecursivo(arbol.raiz);
}

void recorrerEnOrden(const struct ArbolBinario & arbol){
    recorrerEnOrdenRecursivo(arbol.raiz);
}
void recorrerEnOrdenRecursivo(struct NodoArbol * nodo){
    if (not esNodoVacio(nodo)){
        recorrerEnOrdenRecursivo(nodo->izquierda);
        imprimirNodo(nodo);
        recorrerEnOrdenRecursivo(nodo->derecha);
    }
}

void recorrerPostOrden(const struct ArbolBinario & arbol){
    recorrerPostOrdenRecursivo(arbol.raiz);
}
void recorrerPostOrdenRecursivo(struct NodoArbol * nodo){
    if(not esNodoVacio(nodo)){
        recorrerPostOrdenRecursivo(nodo->izquierda);
        recorrerPostOrdenRecursivo(nodo->derecha);
        imprimirNodo(nodo);
    }
}

int altura(const struct ArbolBinario & arbol){
    return alturaRecursivo(arbol.raiz);
}

int alturaRecursivo(struct NodoArbol * nodo){
    if(esNodoVacio(nodo))
        return 0;
    else if(esNodoVacio(nodo->izquierda) and esNodoVacio(nodo->derecha))
        return 0;
    else
        return 1 + maximo(alturaRecursivo(nodo->izquierda), alturaRecursivo(nodo->derecha));
}

int maximo(int a, int b){
    return a >= b ? a : b;
}

int  numeroHojas(const struct ArbolBinario & arbol){
    return numeroHojasRecursivo(arbol.raiz);
}

int numeroHojasRecursivo(struct NodoArbol * nodo){
    if(esNodoVacio(nodo))
        return 0;
    else if(esNodoVacio(nodo->izquierda) and esNodoVacio(nodo->derecha))
        return 1;
    else return numeroHojasRecursivo(nodo->izquierda) + numeroHojasRecursivo(nodo->derecha);
}


int numeroNodos(const struct ArbolBinario & arbol){
    return numeroNodosRecursivo(arbol.raiz);
}

int numeroNodosRecursivo(struct NodoArbol * nodo){
    if(esNodoVacio(nodo))
        return 0;
    else
        return 1 + numeroNodosRecursivo(nodo->izquierda) + numeroNodosRecursivo(nodo->derecha);
}

int esEquilibrado(const struct ArbolBinario & arbol){
    return esEquilibradoRecursivo(arbol.raiz);
}

int esEquilibradoRecursivo(struct NodoArbol * nodo){
    //se simula el retornar un booleano
    if(esNodoVacio(nodo))
        return 1;
    else{
        int alturaHijoIzquierdo = alturaRecursivo(nodo->izquierda);
        int alturaHijoDerecho = alturaRecursivo(nodo->derecha);
        int diferencia = abs(alturaHijoIzquierdo - alturaHijoDerecho);
        return diferencia <=1 and esEquilibradoRecursivo(nodo->izquierda) and
                esEquilibradoRecursivo(nodo->derecha);
    }
    
}

void imprimirNodo(struct NodoArbol * raiz){
    cout<<setw(5)<<raiz->elemento.capitulo;
}

void imprimir(const struct ArbolBinario & arbol){
    imprimirNodo(arbol.raiz);
}

void destruirArbolBinario(struct ArbolBinario & arbol){
    destruirRecursivo(arbol.raiz);
    arbol.raiz = nullptr;
}

void destruirRecursivo(struct NodoArbol * nodo){
    if(not (esNodoVacio(nodo))){
        destruirRecursivo(nodo->izquierda);
        destruirRecursivo(nodo->derecha);
        delete nodo;
    }
}

void actualizarCantidadNodos(struct ArbolBinario &arbol){
    arbol.tamanio = numeroNodos(arbol);
}

void recorridoPorNivel(struct ArbolBinario &arbol){
    struct Cola cola;
    construir(cola);
    int ultimoNivel = -1, nivel = 0;
    if(not esArbolVacio(arbol)){
        encolar(cola, arbol.raiz);
        encolar(cola, nullptr);
        while(not esColaVacia(cola)){
            struct NodoArbol *nodo = desencolar(cola);
            if(nodo != nullptr){
                if(strcmp(nodo->elemento.capitulo, "Principal") == 0)
                    ultimoNivel = nivel;
            }
            if(nodo == nullptr){
                cout << endl;
                nivel++;
                if(not esColaVacia(cola)){
                    encolar(cola, nullptr);
                }
            }
            else{
                imprimeNodo(nodo);
                if(not esNodoVacio(nodo->izquierda)){
                    encolar(cola, nodo->izquierda);
                }
                if(not esNodoVacio(nodo->derecha)){
                    encolar(cola, nodo->derecha);
                }
            }
        }
    }
    destruirCola(cola);
    if(ultimoNivel != -1){
        cout << "El nivel del capitulo Principal es " << ultimoNivel << endl;
    }
}

void imprimeNodo(struct NodoArbol * nodo){
    cout<<left<<setw(14)<<nodo->elemento.capitulo<<right<<setw(2)<<nodo->elemento.relevancia<<", ";
}

void eliminaSubArbol(struct ArbolBinario &arbol, char nodoEliminar){
    int nodosEliminados;
    struct NodoArbol *aux;
    cout << "Nodos del árbol antes de eliminar: " << arbol.tamanio << endl;
    if(nodoEliminar == 'D'){
        nodosEliminados = numeroNodosRecursivo(arbol.raiz->derecha);
        aux = arbol.raiz->derecha;
        arbol.raiz->derecha = nullptr;
    }
    else if(nodoEliminar == 'I'){
        nodosEliminados = numeroNodosRecursivo(arbol.raiz->izquierda);
        aux = arbol.raiz->izquierda;
        arbol.raiz->izquierda = nullptr;
    }
    destruirRecursivo(aux);
    arbol.tamanio -= nodosEliminados;
    cout << "Nodos del árbol después de eliminar: " << arbol.tamanio << endl;
}
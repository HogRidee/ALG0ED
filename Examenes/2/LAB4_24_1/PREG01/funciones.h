/* 
 * File:   funciones.h
 * Author: Ivan
 *
 * Created on 3 de diciembre de 2024, 12:07
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>

#include "ArbolBB.h"
#include "ArbolB.h"
#include "funcionesAB.h"
#include "funcionesABB.h"

using namespace std;

struct ArbolBinario aplicarArbol(struct ArbolBinarioBusqueda &arbolPaquetes, 
        struct ArbolBinario &arbolSistema);
void operarArboles(struct NodoArbol * arbolPaquetes, struct NodoArbol * arbolSistema, 
        struct NodoArbol *& arbolResultado);
bool detectarAnomalia(struct ArbolBinario arbolResultado);
bool esABB(struct NodoArbol * nodoResultado, struct ArbolBinario arbolResultado);
int buscarElemento(struct NodoArbol * nodoResultado, int elemento);
int sumaNodos(struct NodoArbol * nodoResultado);

#endif /* FUNCIONES_H */


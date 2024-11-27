/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 27 de noviembre de 2024, 8:04
 */

#include <iostream>

using namespace std;

#include "ArbolB.h"
#include "funcionesAB.h"
#include "Elemento.h"

int main(int argc, char** argv) {

    struct ArbolBinario arbol, arbol1, arbol2, arbol3, arbol4, arbol5, arbol6;
    struct ArbolBinario arbol7, arbol8;
    
    struct Elemento elemento1 {"Seccion1.1.1", 4},
                    elemento2 {"Seccion1.1.2", 2},
                    elemento3 {"Seccion2.1", 3},
                    elemento4 {"Seccion2.2", 4},
                    elemento5 {"Principal", 10},
                    elemento6 {"Seccion1.1", 6},
                    elemento7 {"Capitulo1", 8},
                    elemento8 {"Capitulo2", 5},
                    elemento9 {"Titulo", 7};

    plantarArbolBinario(arbol1, nullptr, elemento1, nullptr);
    plantarArbolBinario(arbol2, nullptr, elemento2, nullptr);
    plantarArbolBinario(arbol3, nullptr, elemento3, nullptr);
    plantarArbolBinario(arbol4, nullptr, elemento4, nullptr);
    plantarArbolBinario(arbol5, nullptr, elemento5, nullptr);
    plantarArbolBinario(arbol6, arbol1, elemento6, arbol2);
    plantarArbolBinario(arbol7, arbol6, elemento7, arbol5);
    plantarArbolBinario(arbol8, arbol3, elemento8, arbol4);
    plantarArbolBinario(arbol, arbol7, elemento9, arbol8);
    
    actualizarCantidadNodos(arbol);
    recorridoPorNivel(arbol);
    
    char nodoEliminar = 'D';
    eliminaSubArbol(arbol, nodoEliminar);
    
    recorridoPorNivel(arbol);
    
    return 0;
}


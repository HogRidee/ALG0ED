/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 15 de octubre de 2024, 16:48
 */

#include "funciones.h"

int main(int argc, char** argv) {

    //char ordenes[NORDENES] = {'S', 'S', 'S', 'B', 'S'};
    //char ordenes[NORDENES] = {'B', 'B', 'S'};
    char ordenes[NORDENES] = {'S', 'B', 'S', 'B', 'B', 'S', 'S'};
    
    struct Pila nautilus;
    construir(nautilus);
    
    solucion(nautilus, ordenes);
    
    return 0;
}


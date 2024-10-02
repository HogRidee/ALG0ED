/* 
 * File:   main.cpp
 * Author: Ana Roncal
 *
 * Created on 1 de setiembre de 2024, 22:58
 */

#include <iostream>
#include "Cola.h"
#include "funcionesCola.h"
using namespace std;
#define MAXDATOS 6
/*
 * IMPLEMENTACIÓN DE UNA COLA
 * USANDO PUNTEROS CABEZA Y COLA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 * NUEVA VERSIÓN
 */
int main(int argc, char** argv) {
    
    struct Cola cola;
    construir(cola);
    
   struct Cliente cliente[MAXDATOS] {
        {1,{"012"}},
        {2,{"144"}},
        {2,{"462"}},
        {2,{"274"}},
        {1,{"585"}},
        {1,{"232"}},
    };
   
    for(int i = 0; i < MAXDATOS; i++)
        encolarConPrioridad(cola, cliente[i]);
    
    imprime(cola);
     
      
    return 0;
}


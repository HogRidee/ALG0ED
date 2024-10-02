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

/*
 * IMPLEMENTACIÓN DE UNA COLA
 * USANDO PUNTEROS CABEZA Y COLA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 */
int main(int argc, char** argv) {

    struct Cola cola;
    construir(cola);
    
    encolar(cola, 4);
    encolar(cola, 14);
    encolar(cola, 24);
    encolar(cola, 34);
    
    while(not esColaVacia(cola))
        cout << desencolar(cola) << " ";
    imprime(cola);
    
    return 0;
}


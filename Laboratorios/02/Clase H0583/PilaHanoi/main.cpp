/* 
 * File:   main.cpp
 * Author: Ana Roncal
 *
 * Created on 1 de setiembre de 2024, 22:23
 */

#include <iostream>
#include "Pila.h"
#include "funcionesPila.h"
#include "funcionesAuxiliares.h"
#include "funcionesLista.h"
using namespace std;

/*
 * IMPLEMENTACIÓN DE UNA PILA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 */
int main(int argc, char** argv) {
    /**/
    int numDiscos = 4;
    struct Pila torreA, torreB, torreC;
    construir(torreA);
    construir(torreB);
    construir(torreC);
    
    for(int i = numDiscos ; i >= 1; i--)
        apilar(torreA, i);
    
    cout<<"ESTADO INICIAL DE LAS TORRES: " << endl;
    cout<<"TORRE ORIGEN: ";
    imprimir(torreA);
    cout<<"TORRE AUXILIAR: ";
    imprimir(torreB);
    cout<<"TORRE DESTINO: ";
    imprimir(torreC);
    
    hanoi(numDiscos, torreA, torreB, torreC);
    
    cout<<"ESTADO FINAL DE LAS TORRES: " << endl;
    cout<<"TORRE ORIGEN: ";
    imprimir(torreA);
    cout<<"TORRE AUXILIAR: ";
    imprimir(torreB);
    cout<<"TORRE DESTINO: ";
    imprimir(torreC);
    return 0;
}


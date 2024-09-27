/* 
 * File:   main.cpp
 * Author: Ana Roncal
 *
 * Created on 1 de setiembre de 2024, 22:23
 */

#include <iostream>
#include "Pila.h"
#include "funcionesPila.h"
#include "funcionesLaberinto.h"
using namespace std;

/*
 * IMPLEMENTACIÓN DE UNA PILA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 */
int main(int argc, char** argv) {
    /**/
    struct Pila pila;
    
    construir(pila);
    int tablero[3][5] = {{1, 0, 1, 1, 1},
                         {1, 1, 1, 0, 1},
                         {0, 0, 1, 0, 1}};
    bool terminado;
    
    mostrar(tablero);
    terminado = laberinto(pila, tablero, 0, 0);
    if(terminado)
        mostrar(tablero);
    else
        cout<<"No fue posible terminar el laberinto";
    destruirPila(pila);
    
    return 0;
}


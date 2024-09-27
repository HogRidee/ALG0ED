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
using namespace std;

/*
 * IMPLEMENTACIÓN DE UNA PILA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 */
int main(int argc, char** argv) {
    /*Este ejercicio corre por direccionamiento de datos, ver archivo input.txt*/
    // 5 3 4 * + 2 - 
    //resultado 15

    struct Pila pila;
    int respuesta;
    construir(pila);
    notacionPostfija(pila);

    respuesta = desapilar(pila);
    if (esPilaVacia(pila))
        cout << "Respuesta:" << respuesta;
    else
        cout << "no hay resultado, la operación no es posfija";

    destruirPila(pila);
    return 0;
}
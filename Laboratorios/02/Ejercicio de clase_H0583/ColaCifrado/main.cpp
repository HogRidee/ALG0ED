/* 
 * File:   main.cpp
 * Author: Ana Roncal
 *
 * Created on 1 de setiembre de 2024, 22:58
 */

#include <iostream>
#include "Cola.h"
#include "funcionesCola.h"
#include "funciones.h"
using namespace std;

/*
 * IMPLEMENTACIÓN DE UNA COLA
 * USANDO PUNTEROS CABEZA Y COLA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 */
int main(int argc, char** argv) {

    /*CIFRADO*/
    struct Cola clave, copiaClave;
    construir(clave);
    construir(copiaClave);
    cifrarMensaje(clave, copiaClave);
    
    return 0;
}


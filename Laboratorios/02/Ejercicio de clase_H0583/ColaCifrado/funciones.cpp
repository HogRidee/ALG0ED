/* 
 * File:   funciones.cpp
 * Author: ANA RONCAL
 * 
 * Created on 26 de setiembre de 2024, 12:46
 */

#include <iostream>
#include <cstring>
#include "funcionesCola.h"
#include "funciones.h"
using namespace std;
#define MAX_MENSAJE 30
#define MAX_CLAVE 4

void cifrarMensaje(struct Cola & clave, struct Cola & copiaClave) {
    /*Codifica y decodifica un mensaje utilizando una clave formada por diversos
    valores almacenados en una cola*/
    int llave[MAX_CLAVE] = {3, 1, 7, 4};
    char mensaje[MAX_MENSAJE] = {'h', 'o', 'l', 'a', ' ', 'm', 'u', 'n', 'd', 'o'};
    char codificado[MAX_MENSAJE]{};
    char decodificado[MAX_MENSAJE]{};
    /*cargar cola de claves*/
    for (int i = 0; i < MAX_CLAVE; i++) {
        encolar(clave, llave[i]);
        encolar(copiaClave, llave[i]);
    }

    /*codificar el mensaje*/
    codificar(clave, mensaje, codificado);
    cout << "COLAS PARA CIFRADO" << endl;
    cout << "Codificado: " << codificado << endl;

    /*decodificar el mensaje*/
    decodificar(copiaClave, codificado, decodificado);
    cout << "Decodificado: " << decodificado << endl;
}

void codificar(struct Cola & clave, char mensaje [], char codificado []) {

    int valorLlave;
    int longitud = strlen(mensaje);
    for (int i = 0; i < longitud; i++) {
        valorLlave = desencolar(clave);
        codificado[i] = mensaje[i] + valorLlave;
        encolar(clave, valorLlave);
    }

}

void decodificar(struct Cola & copiaClave, char codificado [], char decodificado []) {

    int valorLlave;
    int longitud = strlen(codificado);
    for (int i = 0; i < longitud; i++) {
        valorLlave = desencolar(copiaClave);
        decodificado[i] = codificado[i] - valorLlave;
        encolar(copiaClave, valorLlave);
    }

}
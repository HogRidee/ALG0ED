/* 
 * File:   funcionesAuxiliares.cpp
 * Author: ANA RONCAL
 * 
 * Created on 19 de setiembre de 2024, 11:59
 */

#include <iostream>
#include <cstring>
#include "funcionesPila.h"
#include "funcionesAuxiliares.h"
using namespace std;
#define MAX 2

void notacionPostfija(struct Pila & pila) {

    int operando1;
    int operando2;
    int resultado;
    char elemento[MAX];
    cout<<"Ingrese expresión postfija: "<<endl;
    
    while(!cin.eof()) {
        cin >> elemento;
        if(esOperador(elemento)){
            operando2 = desapilar(pila);
            operando1 = desapilar(pila);
            resultado = opera(elemento, operando1, operando2);
            apilar(pila, resultado);
        }
        else
            apilar(pila, atoi(elemento));
        imprimir(pila);
    }
}

int esOperador(char * c) {
    return (strcmp(c,"+")==0) or (strcmp(c,"-")==0) or
           (strcmp(c, "*")==0) or (strcmp(c,"/")==0);
}

int opera(char * c, int operando1, int operando2) {
    int resultado = 0;
    if(strcmp(c, "+")==0)
        resultado = operando1 + operando2;
    else if(strcmp(c,"-")==0)
        resultado = operando1 - operando2;
    else if(strcmp(c,"*")==0)
        resultado = operando1 * operando2;
    else if(strcmp(c,"/")==0)
        resultado = operando1 / operando2;
    return resultado;
}

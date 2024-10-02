/* 
 * File:   funcionesCola.cpp
 * Author: ANA RONCAL
 * 
 * Created on 26 de setiembre de 2024, 15:43
 */

#include <iostream>
#include "Cola.h"
#include "funcionesCola.h"
#include "funcionesLista.h"
using namespace std;

void construir(struct Cola & cola){
    construir(cola.lista);
}
 
bool esColaVacia(const struct Cola & cola){
    return esListaVacia(cola.lista);
}

int desencolar(struct Cola & cola){
    
    if(esColaVacia(cola)){
        cout <<"La cola está vacía no se puede desencolar"<<endl;
        exit(11);
    }
    int elemento = retornaCabeza(cola.lista);
    eliminaCabeza(cola.lista);
    return elemento;
}

void encolar(struct Cola & cola, int elemento){
    insertarAlFinal(cola.lista, elemento);
}

void imprime(const struct Cola & cola){
    imprime(cola.lista);
}
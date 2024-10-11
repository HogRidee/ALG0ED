#include "misFunciones.h"

void combina(struct Lista &lista1, struct Lista &lista2){
    struct Nodo * recorrido = lista1.cabeza;
    struct Nodo * anterior = nullptr;
    struct Nodo * nuevo = nullptr;
    while(not esListaVacia(lista2)){
        if(recorrido == nullptr){
            nuevo = lista2.cabeza;
            anterior->siguiente = nuevo;
            break;
        }
        if(recorrido->elemento > retornaCabeza(lista2)){
            nuevo = lista2.cabeza;
            lista2.cabeza = lista2.cabeza->siguiente;
            nuevo->siguiente = recorrido;
            anterior->siguiente = nuevo;
            anterior = nuevo;
        }
        else{
            anterior = recorrido;
            recorrido = recorrido->siguiente;
        }
    }
}

#include "funciones.h"

void encolarConPrioridad(struct Cola &cola, struct Evento evento){
    insertarConPrioridad(cola.lista, evento);
}

void insertarConPrioridad(struct Lista &lista, struct Evento evento){
    struct Nodo * nuevo = crearNodo(evento, nullptr);
    if(esListaVacia(lista)){
        lista.cabeza = nuevo;
        lista.cola = nuevo;
        if(evento.prioridad == 3) lista.cola3 = nuevo;
        if(evento.prioridad == 2) lista.cola2 = nuevo;
    }
    else{
        if(evento.prioridad == 3){
            if(lista.cola3 == nullptr){
                nuevo->siguiente = lista.cabeza;
                lista.cabeza = nuevo;
            }
            lista.cola3 = nuevo;
        }
        else{
            if(evento.prioridad == 2){
                if(lista.cola2 == nullptr){
                    if(lista.cola3 == nullptr){
                        nuevo->siguiente = lista.cabeza;
                        lista.cabeza = nuevo;
                    }
                    else{
                        nuevo->siguiente = lista.cola3->siguiente;
                    }
                }
                lista.cola2 = nuevo;
            }
            else{
                lista.cola->siguiente = nuevo; 
                lista.cola = nuevo;
            }
        }
    }
}
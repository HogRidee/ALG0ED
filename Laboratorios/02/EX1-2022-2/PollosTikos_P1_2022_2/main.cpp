/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: david
 *
 * Created on 9 de setiembre de 2024, 11:51
 */

#include <cstdlib>
#include <iostream>
#include "Lista.h"
#include "funcionesLista.h"

using namespace std;

/*
 * 
 */

void fusionarListas(struct Lista & listaUno,struct Lista listaDos){
    /*Voy a evaluar el caso de las listas disjuntas*/
    Nodo * ultimoUno = obtenerUltimoNodo(listaUno);
    Nodo * ultimoDos = obtenerUltimoNodo(listaDos);
    if (ultimoUno->elemento<listaDos.cabeza->elemento){
        ultimoUno->siguiente = listaDos.cabeza;
        listaUno.longitud = listaUno.longitud + listaDos.longitud;
    }
    else{
        if (ultimoDos->elemento<listaUno.cabeza->elemento){
            ultimoDos->siguiente = listaUno.cabeza;
            listaUno.cabeza = listaDos.cabeza;
            listaUno.longitud = listaUno.longitud + listaDos.longitud;
        }
        else{
            Nodo *inicio = nullptr;
            Nodo *fin = nullptr;
            while (!esListaVacia(listaUno) && !esListaVacia(listaDos)){
                if (listaUno.cabeza->elemento<=listaDos.cabeza->elemento){
                    if (inicio==nullptr){
                        inicio = listaUno.cabeza;
                        fin = listaUno.cabeza;
                    }
                    else{
                        fin->siguiente = listaUno.cabeza;
                        fin = listaUno.cabeza;
                    }
                    listaUno.cabeza = listaUno.cabeza->siguiente;
                }
                else{
                    if (inicio==nullptr){
                        inicio = listaDos.cabeza;
                        fin = listaDos.cabeza;
                    }
                    else{
                        fin->siguiente = listaDos.cabeza;
                        fin = listaDos.cabeza;
                    }
                    listaDos.cabeza = listaDos.cabeza->siguiente;
                }
            }
            /*Debo pasar los elementos que sobren en alguna de las listas a la fusion*/
            if (!esListaVacia(listaUno)){
                fin->siguiente = listaUno.cabeza;
                fin = obtenerUltimoNodo(listaUno);
            }
            if (!esListaVacia(listaDos)){
                fin->siguiente = listaDos.cabeza;
                fin = obtenerUltimoNodo(listaDos);
            }
            listaUno.cabeza = inicio;
            listaUno.longitud = listaUno.longitud + listaDos.longitud;
        }
    }
}

int main(int argc, char** argv) {
    struct Lista listaLunes, listaMartes, listaMiercoles;
    construir(listaLunes);
    construir(listaMartes);
    construir(listaMiercoles);
    /*Armamos los pedidos del Lunes*/
    insertarAlInicio(listaLunes,12);
    insertarAlInicio(listaLunes,10);
    insertarAlInicio(listaLunes,8);
    /*Armamos los pedidos del Martes*/
    insertarAlInicio(listaMartes,11);
    insertarAlInicio(listaMartes,9);
    /*Armamos los pedidos del Miercoles*/
    insertarAlInicio(listaMiercoles,10);
    insertarAlInicio(listaMiercoles,9);
    insertarAlInicio(listaMiercoles,8);
    cout << "Lista Lunes: ";
    imprime(listaLunes);
    cout << "Lista Martes: ";
    imprime(listaMartes);
    cout << "Lista Miércoles: ";
    imprime(listaMiercoles);
    fusionarListas(listaLunes,listaMartes);
    imprime(listaLunes);
    fusionarListas(listaLunes,listaMiercoles);
    imprime(listaLunes);
    return 0;
}


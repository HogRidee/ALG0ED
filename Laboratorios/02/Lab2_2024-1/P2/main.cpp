    /* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 27 de septiembre de 2024, 12:59
 */

#include <iostream>

#include "Pila.h"
#include "Lista.h"
#include "Producto.h"
#include "funcionesPila.h"
#include "funcionesLista.h"
#include "Funciones.h"

using namespace std;

int main(int argc, char** argv) {

    struct Pila pila, A, B, C;
    construir(pila);
    construir(A);
    construir(B);
    construir(C);
    
    struct Lista faja;
    construir(faja);
    
    struct Producto productos[7]{{1,100}, 
                                 {2,200},
                                 {2,50},
                                 {1,150},
                                 {1,200},
                                 {2,100},
                                 {1,50}
    };
    
    for(int i = 0; i < 7; i++)
        insertarAlFinal(faja, productos[i]);

    for(int i = 0; i < 7; i++){
        struct Nodo * producto = obtenerUltimo(faja);
        if(esPilaVacia(pila)) apilar(pila, producto->elemento);
        else{
            if(cima(pila).peso < producto->elemento.peso){
                
            }
            else
                apilar(pila, producto->elemento);
        }
    }
    
    imprimir(pila);
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 2 de octubre de 2024, 14:57
 */

#include <iostream>

#include "Cola.h"
#include "funcionesCola.h"
#include "Evento.h"

using namespace std;

int main(int argc, char** argv) {

    struct Cola cola;
    construir(cola);
    
    struct Evento eventos[7]{{"ISI007", 3},
                          {"ISI006", 3},
                          {"ISI005", 2},
                          {"ISI004", 3},
                          {"ISI003", 1},
                          {"ISI002", 1},
                          {"ISI001", 2}
    };
    
    for(int i = 0; i < 7; i++)
        encolarConPrioridad(cola, eventos[i]);
    
    imprime(cola);
    
    return 0;
}


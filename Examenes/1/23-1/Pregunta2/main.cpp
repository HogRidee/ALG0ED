/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 16 de octubre de 2024, 16:05
 */

#include "funciones.h"

int main(int argc, char** argv) {

    struct Cola cola;
    construir(cola);
    
    struct Evento eventos[7] = {{"ISI007", 1},
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
    
    struct Evento eventos2[10] = {{"PSI010", 2, 1},
                                {"PSI009", 2, 2},
                                {"PSI008", 2, 3},
                                {"PSI007", 2, 4},
                                {"PSI006", 2, 5},
                                {"PSI005", 1, 1},
                                {"PSI004", 1, 2},
                                {"PSI003", 1, 3},
                                {"PSI002", 1, 4},
                                {"PSI001", 1, 5}
    };
    
    struct Cola cola2;
    construir(cola2);
    
    for(int i = 0; i < 10; i++)
        encolarConPrioridad(cola2, eventos2[i]);
    
    imprime(cola2);
    
    generarNuevaCola(cola2);
    
    imprime(cola2);
    
    return 0;
}


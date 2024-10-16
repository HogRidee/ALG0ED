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
    
    struct Evento eventos[7] = {{"IS1007", 1},
                                {"IS1006", 3},
                                {"IS1005", 2},
                                {"IS1004", 3},
                                {"IS1003", 1},
                                {"IS1002", 1},
                                {"IS1001", 2}
    };
    
    for(int i = 0; i < 7; i++)
        encolarConPrioridad(cola, eventos[i]);
    
    imprime(cola);
    
    return 0;
}


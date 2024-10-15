/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 15 de octubre de 2024, 17:27
 */

#include "funciones.h"

int main(int argc, char** argv) {

    struct Cola llegadas;
    construir(llegadas);
    
    struct Llegada llegadass[5] = {{2101, 0, 55, 0, 55},
                                   {1102, 1, 45, 1, 45},
                                   {4111, 0, 30, 0, 30},
                                   {2105, 1, 22, 1, 22},
                                   {3108, 5, 25, 5, 25}
    };
    
    for(int i = 0; i < 5; i++){
        encolar(llegadas, llegadass[i]);
    }
    
    ordenarCola(llegadas);
    
    imprime(llegadas);
    
    return 0;
}


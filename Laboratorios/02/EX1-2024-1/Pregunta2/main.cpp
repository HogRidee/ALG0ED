/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 11 de octubre de 2024, 16:03
 */

#include "funciones.h"

using namespace std;

int main(int argc, char** argv) {
    
    //char ordenes[5] = {'S', 'S', 'S', 'B', 'S'};
    //char ordenes[3] = {'B', 'B', 'S'};
    char ordenes[7] = {'S', 'B', 'S', 'B', 'B', 'S', 'S'};
    
    struct Pila nautilus;
    construir(nautilus);
    
    resolver(nautilus, ordenes);
    
    return 0;
}


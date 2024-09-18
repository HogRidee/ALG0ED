/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 18 de septiembre de 2024, 12:38
 */

#include <iostream>

#include "Lista.h"
#include "Nodo.h"
#include "funciones.h"

using namespace std;

int main(int argc, char** argv) {

    struct Lista lunes, martes, miercoles, jueves, viernes;
    
    construir(lunes);
    construir(martes);
    construir(miercoles);
    construir(jueves);
    construir(viernes);
    
    insertarAlFinal(lunes, 8, 6);
    insertarAlFinal(lunes, 10, 14);
    insertarAlFinal(lunes, 12, 1);
    
    insertarAlFinal(martes, 9, 3);
    insertarAlFinal(martes, 11, 8);
    
    insertarAlFinal(miercoles, 8, 2);
    insertarAlFinal(miercoles, 9, 5);
    insertarAlFinal(miercoles, 10, 10);
    
    insertarAlFinal(jueves, 14, 13);
    insertarAlFinal(jueves, 15, 9);
    insertarAlFinal(jueves, 16, 11);
    
    insertarAlFinal(viernes, 17, 4);
    insertarAlFinal(viernes, 18, 12);
    insertarAlFinal(viernes, 19, 7);

    struct Lista sabado;
    
    construir(sabado);
    
    fusion(sabado, lunes);
    fusion(sabado, martes);
    fusion(sabado, miercoles);
    fusion(sabado, jueves);
    fusion(sabado, viernes);
            
    imprime(sabado);
    
    return 0;
}


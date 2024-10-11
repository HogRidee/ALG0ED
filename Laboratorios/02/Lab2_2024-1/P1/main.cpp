/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 2 de octubre de 2024, 12:03
 */

#include <iostream>

#include "Cola.h"
#include "funcionesCola.h"
#include "Paciente.h"

using namespace std;

int main(int argc, char** argv) {

    struct Cola cola;
    
    construir(cola);
    
    struct Paciente pacientes[6] = {{19430530, "BXQ778"},
                                    {20140420, "HRP112"},
                                    {19750626, "PRL625"},
                                    {19491022, "MKP157"},
                                    {20200513, "ARH749"},
                                    {19300214, "HRQ931"}
    };
    
    for(int i = 0; i < 6; i++)
        encolarConPrioridad(cola, pacientes[i]);
    
    imprime(cola);
    
    return 0;
}


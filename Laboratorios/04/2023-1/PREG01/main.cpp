/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 28 de noviembre de 2024, 7:14
 */

#include <iostream>

#include "Servidor.h"
#include "funcionesAB.h"
#include "ArbolB.h"

using namespace std;

int main(int argc, char** argv) {

    struct Servidor servidor1 {'E', 50},
                    servidor2 {'E', 100},
                    servidor3 {'S', 50},
                    servidor4 {'Z', 200},
                    servidor5 {'S', 100},
                    servidor6 {'E', 200},
                    servidor7 {'E', 100},
                    servidor8 {'S', 50},
                    servidor9 {'S', 200},
                    servidor10 {'S', 150},
                    servidor11 {'Z', 50},
                    servidor12 {'E', 100},
                    servidor13 {'Z', 100};
    
    struct ArbolBinario arbol, arbol1, arbol2, arbol3, arbol4, arbol5, arbol6;
    struct ArbolBinario arbol7, arbol8, arbol9, arbol10, arbol11, arbol12;
    
    plantarArbolBinario(arbol1, nullptr, servidor1, nullptr);
    plantarArbolBinario(arbol2, nullptr, servidor2, nullptr);
    plantarArbolBinario(arbol3, nullptr, servidor5, nullptr);
    plantarArbolBinario(arbol4, nullptr, servidor6, nullptr);
    plantarArbolBinario(arbol5, arbol1, servidor3, nullptr);
    plantarArbolBinario(arbol6, arbol2, servidor4, nullptr);
    plantarArbolBinario(arbol7, arbol5, servidor7, arbol6);
    plantarArbolBinario(arbol8, nullptr, servidor8, nullptr);
    plantarArbolBinario(arbol9, arbol3, servidor9, arbol4);
    plantarArbolBinario(arbol10, nullptr, servidor10, nullptr);
    plantarArbolBinario(arbol11, arbol7, servidor11, arbol8);
    plantarArbolBinario(arbol12, arbol9, servidor12, arbol10);
    plantarArbolBinario(arbol, arbol11, servidor13, arbol12);
    
    cout << "Se encuentra Skynerd?: " << buscaSkynerd(arbol);
    
    return 0;
}


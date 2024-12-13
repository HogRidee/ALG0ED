/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 3 de diciembre de 2024, 11:23
 */

#include <iostream>

#include "ArbolBB.h"
#include "funcionesABB.h"
#include "funcionesAB.h"
#include "funciones.h"

using namespace std;

int main(int argc, char** argv) {

    struct ArbolBinarioBusqueda arbolPaquetes;
    struct ArbolBinario arbolSistema;
    struct ArbolBinario arbolResultado;
    
    construir(arbolPaquetes);
    construir(arbolSistema);
    
    insertar(arbolPaquetes, 6);
    insertar(arbolPaquetes, 3);
    insertar(arbolPaquetes, 9);
    
    struct ArbolBinario ab1, ab2, ab3, ab4;
    construir(ab1);
    construir(ab2);
    construir(ab3);
    construir(ab4);
    
    plantarArbolBinario(ab1, nullptr, 2, nullptr);
    plantarArbolBinario(ab2, nullptr, 3, nullptr);
    plantarArbolBinario(ab3, ab1, 7, ab2);
    plantarArbolBinario(ab4, nullptr, 8, nullptr);
    plantarArbolBinario(arbolSistema, ab3, 1, ab4);
    
    arbolResultado = aplicarArbol(arbolPaquetes, arbolSistema);
    
    if(detectarAnomalia(arbolResultado)){
        cout << "Sin eventos sospechosos" << endl;
    }
    else{
        cout << "Anomalía detectada" << endl;
    }
    
    return 0;
}


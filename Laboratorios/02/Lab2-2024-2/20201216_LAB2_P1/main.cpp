/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 12 de octubre de 2024, 9:22
 */

#include <iostream>
#include <iomanip>

#include "funciones.h"
#include "Efectivo.h"
#include "Pila.h"
#include "funcionesLista.h"
#include "funcionesPila.h"

using namespace std;

int main(int argc, char** argv) {
    
    // Para probar, cambiar NDAT por la cantidad de efectivos
    struct Efectivo efectivos[NDAT] = {{1,2,4},
                                    {2,2,1},
                                    {3,2,4}
    };
    
//    struct Efectivo efectivos[NDAT] = {{1,1,1},
//                                    {2,2,3},
//                                    {3,2,5},
//                                    {4,1,2}
//    };
    
//    struct Efectivo efectivos[NDAT] = {{1,3,1},
//                                    {2,2,1},
//                                    {3,2,4},
//    };
    
    int soluciones = calcularSoluciones(efectivos);
    
    cout << "Se pueden formar " << soluciones << " agrupaciones" << endl;
    
    return 0;
}


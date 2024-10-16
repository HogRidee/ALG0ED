/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 16 de octubre de 2024, 14:49
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int red[NSERVIDORES][NSERVIDORES] = {
        {0,0,0,0,0,0,0},
        {10,0,20,30,0,20,40},
        {0,0,0,0,0,100,0},
        {0,0,0,0,0,80,0},
        {50,10,5,10,0,100,4},
        {100,0,0,0,0,0,0},
        {0,0,0,0,0,0,0}
    };
    
    int n = 7, servidor;
    
    servidor = buscaSkynerd(red, n-1);
    
    if(servidor == -1)
        cout << "Skynerd no está en la red" << endl;
    else
        cout << "Skynerd ha sido detectado en el servidor: " << servidor+1 << endl;
    
    return 0;
}


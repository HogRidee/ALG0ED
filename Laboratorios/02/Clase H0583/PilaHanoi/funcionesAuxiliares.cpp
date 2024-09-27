/* 
 * File:   funcionesAuxiliares.cpp
 * Author: ANA RONCAL
 * 
 * Created on 19 de setiembre de 2024, 11:23
 */

#include "funcionesPila.h"

void hanoi(int n, struct Pila & desde, struct Pila & auxiliar, struct Pila & hacia){
    //CASO BASE
    if(n == 1){
        apilar(hacia, desapilar(desde));
        return;
    }
    hanoi(n-1, desde, hacia, auxiliar);
    apilar(hacia, desapilar(desde));
    hanoi(n-1, auxiliar, desde, hacia);   
}

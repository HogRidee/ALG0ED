/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 23 de octubre de 2024, 11:53
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int arr[] = {10,20,15,10,12,10,13,18};
    int n = 8;
    
    int rpta = calculaIntervalos(arr, 0, n-1);
    cout << "Intervalo maximo de incrementos: " << rpta;
    cout << " lo que genera un indice de incrementos de " << (double)rpta/n << endl;
    
    
    int arr2[] = {7,2,9,10,16,10,13,8,2,10};
    n = 10;
    rpta = calculaIntervalos(arr2, 0, n-1);
    cout << "Intervalo maximo de incrementos: " << rpta;
    cout << " lo que genera un indice de incrementos de " << (double)rpta/n << endl;
    
    return 0;
}


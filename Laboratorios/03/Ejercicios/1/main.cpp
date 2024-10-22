/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 22 de octubre de 2024, 10:21
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int n = 13, arr[n] = {1,1,3,3,4,4,5,5,7,8,8,9,9};
    
    encontrarSolo(arr, 0, n-1);
    
    return 0;
}


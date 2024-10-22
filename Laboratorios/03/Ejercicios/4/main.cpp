/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 22 de octubre de 2024, 11:16
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int n = 8, arr[n] = {-2,-5,6,-2,-3,1,5,-6};
    
    cout << cuentaSuma(arr, 0, n-1) << endl;
    
    return 0;
}


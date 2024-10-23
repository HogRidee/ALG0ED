/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 23 de octubre de 2024, 10:50
 */

#include "funciones.h"

int main(int argc, char** argv) {
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;
    int aux[5];
    
    cout << contarInversiones(arr, aux, 0, n - 1) << endl;  // Output: 3
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 22 de octubre de 2024, 11:06
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int n = 8, arr[n] = {5,6,7,8,1,2,3,4};
    
    cout << encuentraMinimo(arr, 0, n-1) << endl;
    
    return 0;
}


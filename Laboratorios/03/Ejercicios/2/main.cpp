/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 22 de octubre de 2024, 10:49
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int n1 = 7, arr1[n1] = {1,1,1,0,0,0,0};
    int n2 = 5, arr2[n2] = {1,1,1,1,1};
    
    int r1 = cuentaCeros(arr1, 0, n1-1);
    int r2 = cuentaCeros(arr2, 0, n2-1);
    
    cout << r1 << endl;
    cout << r2 << endl;
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 23 de octubre de 2024, 10:30
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int n = 11, arr[n] = {8,10,20,80,100,200,400,500,3,2,1};
    
    cout << encuentraMax(arr, 0, n-1) << endl;
    
    return 0;
}


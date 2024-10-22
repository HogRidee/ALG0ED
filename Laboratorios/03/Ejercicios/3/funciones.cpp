#include "funciones.h"

int encuentraMinimo(int *arr, int ini, int fin){
    if(ini > fin) 
        return -1;
    if(ini == fin) 
        return arr[ini];
    int med = (ini+fin)/2;
    if(arr[med] < arr[med+1]) 
        return encuentraMinimo(arr, ini, med);
    else 
        return encuentraMinimo(arr, med+1, fin);    
}
#include "funciones.h"

int encuentraMax(int *arr, int ini, int fin){
    if(ini >= fin) return arr[ini];
    int med = (ini+fin)/2;
    if(arr[med] < arr[med+1])
        return encuentraMax(arr, med+1, fin);
    else
        return encuentraMax(arr, ini, med);
}
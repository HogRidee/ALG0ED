#include "funciones.h"

void encontrarSolo(int *arr, int ini, int fin){
    if(ini > fin) return;
    if(ini == fin){
        cout << arr[ini] << endl;
        return;
    }
    int med = (ini+fin)/2;
    if(med%2 == 0){
        if(arr[med] == arr[med+1])
            encontrarSolo(arr, med+2, fin);
        else
            encontrarSolo(arr, ini, med);
    }
    else{
        if(arr[med] == arr[med+1])
            encontrarSolo(arr, ini, med-1);
        else
            encontrarSolo(arr, med+1, fin);
    }
}
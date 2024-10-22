#include "funciones.h"

int cuentaCeros(int *arr, int ini, int fin){
    if(ini > fin) return 0;
    if(ini == fin){
        return (arr[ini] == 0);
    }
    int med = (ini+fin)/2;
    int contador = 0;
    if(arr[med] == 0){
        contador += fin-med+1;
        contador += cuentaCeros(arr, ini, med-1);
    }
    else{
        contador += cuentaCeros(arr, med+1, fin);
    }
    return contador;
}
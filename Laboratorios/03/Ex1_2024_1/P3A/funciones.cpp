#include "funciones.h"

void mergeSort(int *principal, int *aux1, int *aux2, int ini, int fin){
    if(ini == fin) return;
    int med = (ini+fin)/2;
    mergeSort(principal, aux1, aux2, ini, med);
    mergeSort(principal, aux1, aux2, med+1, fin);
    merge(principal, aux1, aux2, ini, med, fin);
}

void merge(int *principal, int *aux1, int *aux2, int ini, int med, int fin){
    int copia1[fin+1], copia2[fin+1], m = 0;
    for(int i = 0; i < fin+1; i++){
        copia1[i] = 100;
        copia2[i] = 100;
    }
    for(int i = ini; i < med; i++) copia1[i] = principal[i];
    for(int i = med; i < fin; i++){
        copia2[m] = principal[i];
        m++;
    }
    
}

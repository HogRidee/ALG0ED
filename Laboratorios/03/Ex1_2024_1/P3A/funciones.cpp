#include "funciones.h"

void mergeSort(int *principal, int *aux1, int *aux2, int ini, int fin){
    if(ini == fin) return;
    int med = (ini+fin)/2;
    mergeSort(principal, aux1, aux2, ini, med);
    mergeSort(principal, aux1, aux2, med+1, fin);
    merge(principal, aux1, aux2, ini, med, fin);
}

void merge(int *principal, int *aux1, int *aux2, int ini, int med, int fin){
    int n = fin-ini+1;
    int copia[n], copia2[n], copia3[n];
    int i = ini, j = med+1, k = 0;
    // Fusionar los subarreglos en el arreglo copia
    while (i <= med && j <= fin) {
        if (principal[i] <= principal[j]) {
            copia[k] = principal[i];
            copia2[k] = aux1[i];
            copia3[k] = aux2[i];
            i++;
            k++;
        } else {
            copia[k] = principal[j];
            copia2[k] = aux1[j];
            copia3[k] = aux2[j];
            k++;
            j++;
        }
    }
    // Copiar los elementos restantes de la primera mitad
    while (i <= med) {
        copia[k] = principal[i];
        copia2[k] = aux1[i];
        copia3[k] = aux2[i];
        k++;
        i++;
    }
    // Copiar los elementos restantes de la segunda mitad
    while (j <= fin) {
        copia[k] = principal[j];
        copia2[k] = aux1[j];
        copia3[k] = aux2[j];
        k++;
        j++;
    }
    // Copiar los elementos fusionados de vuelta al arreglo principal
    for (i = ini, k = 0; i <= fin; i++, k++) {
        principal[i] = copia[k];
        aux1[i] = copia2[k];
        aux2[i] = copia3[k];
    }
}

//void merge(int *principal, int *aux1, int *aux2, int ini, int med, int fin){
//    int n = fin-ini+1;
//    int copia[n];
//    int i = ini, j = med+1, k = 0;
//    // Fusionar los subarreglos en el arreglo copia
//    while (i <= med && j <= fin) {
//        if (principal[i] <= principal[j]) {
//            copia[k] = principal[i];
//            i++;
//            k++;
//        } else {
//            copia[k] = principal[j];
//            k++;
//            j++;
//        }
//    }
//    // Copiar los elementos restantes de la primera mitad
//    while (i <= med) {
//        copia[k++] = principal[i++];
//    }
//    // Copiar los elementos restantes de la segunda mitad
//    while (j <= fin) {
//        copia[k++] = principal[j++];
//    }
//    // Copiar los elementos fusionados de vuelta al arreglo principal
//    for (i = ini, k = 0; i <= fin; i++, k++) {
//        principal[i] = copia[k];
//    }
//}

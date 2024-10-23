#include "funciones.h"

int calculaIntervalos(int *arr, int ini, int fin){
    if(ini >= fin) return 0;
    int med = (ini+fin)/2;
    return maximo3(calculaIntervalos(arr, ini, med),
                   calculaIntervalos(arr, med+1, fin),
                   calculaIntervalosCruzado(arr, ini, med, fin));
}

int maximo3(int a, int b, int c){
    return maximo(a, maximo(b,c));
}

int maximo(int a, int b){
    if(a > b) return a;
    else return b;
}

int calculaIntervalosCruzado(int *arr, int ini, int med, int fin){
    int intervalosIzq = 0, intervalos = 1;
    for(int i = ini; i < med; i++){
        if(arr[i] < arr[i+1]) intervalos++;
        else intervalos = 1;
        if(intervalos > intervalosIzq) intervalosIzq = intervalos;
    }
    int intervalosDer = 0;
    intervalos = 1;
    for(int i = med; i < fin; i++){
        if(arr[i] < arr[i+1]) intervalos++;
        else intervalos = 1;
        if(intervalos > intervalosDer) intervalosDer = intervalos;
    }
    intervalos = 1;
    int maxIntervalosCruzado = 1;
    for (int i = med - 1; i >= ini; i--) {
        if (arr[i] < arr[i + 1]) intervalos++;
        else break;
    }
    for (int i = med; i < fin; i++) {
        if (arr[i] < arr[i + 1]) intervalos++;
        else break;
    }
    maxIntervalosCruzado = intervalos;
    return maximo3(intervalosIzq, intervalosDer, maxIntervalosCruzado);
}
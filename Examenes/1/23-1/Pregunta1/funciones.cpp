#include "funciones.h"

int buscaSkynerd(int red[NSERVIDORES][NSERVIDORES], int n){
    int a, b, candidato, mayor = 0;
    struct Pila pila;
    construir(pila);
    for(int i = 0; i < n; i++) apilar(pila, i);
    while(longitud(pila) > 1){
        a = desapilar(pila);
        b = desapilar(pila);
        if(red[a][b] != 0) apilar(pila, a);
        else apilar(pila, b);
    }
    candidato = desapilar(pila);
    for(int i = 0; i < n; i++){
        if(i != candidato and (not red[candidato][i] or red[i][candidato]))
            return -1;
        if(red[candidato][i] > mayor) mayor = red[candidato][i];
    }
    cout << "Máximo de paquetes enviados por Skynerd: "<<mayor << endl;
    return candidato;
}
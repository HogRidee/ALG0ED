/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 23 de octubre de 2024, 13:59
 */

#include "funciones.h"

int main(int argc, char** argv) {

    int id[] = {4,1,5,7,6,3,2};
    int impacto[] = {1,2,3,2,3,2,1};
    int riesgo[] = {3,4,9,2,6,6,2};
    int n = 7;
    
    cout << "Lista de riesgos: (ID - IMPACTO - NIVEL DE RIESGO)" << endl;
    for(int i = 0; i < n; i++){
        cout << id[i] << "-";
        cout << impacto[i] << "-";
        cout << riesgo[i] << " ";
    } 
    cout << endl;
    mergeSort(riesgo, id, impacto, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << id[i] << "-";
        cout << impacto[i] << "-";
        cout << riesgo[i] << " ";
    }
    cout << "por nivel de riesgo" << endl;
    mergeSort(impacto, id, riesgo, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << id[i] << "-";
        cout << impacto[i] << "-";
        cout << riesgo[i] << " ";
    }
    cout << "por impacto" << endl;
    mergeSort(id, riesgo, impacto, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << id[i] << "-";
        cout << impacto[i] << "-";
        cout << riesgo[i] << " ";
    }
    cout << "por id de riesgo" << endl;
    return 0;
}


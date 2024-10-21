#include "misFunciones.h"

void leerGuerreros(struct Lista &listaGuerreros, int &nPeleas){
    ifstream arch("Guerreros.txt", ios::in);
    if(not arch.is_open()){
        cout << "ERROR: No se pudo abrir el archivo Guerreros.txt" << endl;
        exit(1);
    }
    int nGuerreros, guerrero;
    arch >> nPeleas;
    arch >> nGuerreros;
    for(int i = 0; i < nGuerreros; i++){
        arch >> guerrero;
        insertarAlFinal(listaGuerreros, guerrero);
    }
}

void formarEjercitos(struct Lista &guerreros, struct Lista &bowser, 
        struct Lista &peach, struct Lista &donkeykong){
    int guerrero, ejercito, n;
    n = longitud(guerreros);
    for(int i = 0; i < n; i++){
        guerrero = retornaCabeza(guerreros);
        eliminaCabeza(guerreros);
        ejercito = guerrero % 10;
        guerrero /= 10;
        if(ejercito == 1) insertarEnOrden(bowser, guerrero);
        if(ejercito == 2) insertarEnOrden(peach, guerrero);
        if(ejercito == 3) insertarEnOrden(donkeykong, guerrero);
    }
}
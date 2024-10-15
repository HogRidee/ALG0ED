/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 12 de octubre de 2024, 8:04
 */

#include "misFunciones.h"

int main(int argc, char** argv) {

    struct Lista lista;
    construir(lista);
    
    // La lectura la realizaré desde un archivo de texto
    cargarDatosLista("Pedidos.txt", lista);
    
    cout << "Lista al inicio:" << endl;
    imprime(lista);
    
    ordenarLista(lista);
    
    cout << "Lista al final:" << endl;
    imprime(lista);
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 11 de octubre de 2024, 12:45
 */


#include "misFunciones.h"

int main(int argc, char** argv) {

    struct Lista listaA, listaD, listaB, listaH;
    construir(listaA);
    construir(listaD);
    construir(listaB);
    construir(listaH);
    
    insertarAlFinal(listaA, 120);
    insertarAlFinal(listaA, 145);
//    insertarAlFinal(listaA, 230);
//    insertarAlFinal(listaA, 247);
//    insertarAlFinal(listaA, 285);
    
    insertarAlFinal(listaD, 182);
    insertarAlFinal(listaD, 240);
    insertarAlFinal(listaD, 300);
    
    insertarAlFinal(listaB, 58);
    insertarAlFinal(listaB, 120);
    insertarAlFinal(listaB, 247);
    insertarAlFinal(listaB, 278);
    
    insertarAlFinal(listaH, 128);
    insertarAlFinal(listaH, 129);
    insertarAlFinal(listaH, 236);
    insertarAlFinal(listaH, 354);
//    insertarAlFinal(listaH, 540);
//    insertarAlFinal(listaH, 782);
    
    combina(listaA, listaH);
    combina(listaA, listaD);
    
    imprime(listaA);
    
    return 0;
}


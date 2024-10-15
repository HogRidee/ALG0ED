/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 15 de octubre de 2024, 14:04
 */

#include "misFunciones.h"

int main(int argc, char** argv) {

    bool existe = false;
    
    struct Lista listas[6];
    int nListas = 0;
    
    leerTipoProductos(listas, nListas, "TiposProductos.txt");
    
    struct Formula formula[6];
    int nFormulas = 0;
    
    leerFormula(formula, nFormulas, "Formula2.txt");
    
    existe = verificarExistencia(listas, formula, nListas, nFormulas);
    
    if(existe){
        imprimeListaFinal(listas, formula, nListas, nFormulas);
    }
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: ivana
 *
 * Created on 13 de septiembre de 2024, 11:46 AM
 */

#include <iostream>
#include <fstream>

#include "Funciones.h"
#include "Guerrero.h"
#include "Arma.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    struct Guerrero guerreros[3]{{1,120, 2},
                                 {2,160, 1, 2},
                                 {3, 80, 3}};

    struct Arma armas[12]{{'Z', 60, 3},
                          {'P', 80, 1, 'Z'},
                          {'R', 38, 2},
                          {'D', 25, 2, 'R'},
                          {'E', 49, 2},
                          {'F', 57, 1},
                          {'G', 68, 3},
                          {'H', 35, 2, 'Z', 'E'},
                          {'I', 62, 2, 'R'},
                          {'J', 42, 2},
                          {'K', 36, 1, 'Z'},
                          {'L', 54, 3}};
    
    solucionPo(guerreros, armas);
    
    return 0;
}


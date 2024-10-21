/* 
 * File:   misFunciones.h
 * Author: Ivan
 *
 * Created on 17 de octubre de 2024, 12:49
 */

#ifndef MISFUNCIONES_H
#define MISFUNCIONES_H

#include <iostream>
#include <iomanip> /*formato de números*/
#include <fstream>
#include "Lista.h"
#include "funciones.h"
using namespace std;

void leerGuerreros(struct Lista &listaGuerreros, int &nPeleas);
void formarEjercitos(struct Lista &guerreros, struct Lista &bowser, 
        struct Lista &peach, struct Lista &donkeykong);

#endif /* MISFUNCIONES_H */


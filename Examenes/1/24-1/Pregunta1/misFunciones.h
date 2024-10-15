/* 
 * File:   misFunciones.h
 * Author: Ivan
 *
 * Created on 15 de octubre de 2024, 14:09
 */

#ifndef MISFUNCIONES_H
#define MISFUNCIONES_H

#include <iostream>
#include <iomanip>
#include <fstream>

#include "Formula.h"
#include "Lista.h"
#include "funciones.h"

using namespace std;

void leerTipoProductos(struct Lista *listas, int &nListas, const char *filename);
void leerCalorias(ifstream &arch, struct Lista &lista);
void leerFormula(struct Formula *formula, int &nFormulas, const char *filename);
bool verificarExistencia(struct Lista *listas, struct Formula *formula, 
        int nListas, int nFormulas);
int buscarProducto(struct Lista *listas, int nListas, char tipo);
void imprimeListaFinal(struct Lista *listas, struct Formula *formula, int nListas,
        int nFormulas);
void modificaLista(struct Lista &lista, struct Formula &formula);
void combinaListas(struct Lista &lista1, struct Lista &lista2);

#endif /* MISFUNCIONES_H */


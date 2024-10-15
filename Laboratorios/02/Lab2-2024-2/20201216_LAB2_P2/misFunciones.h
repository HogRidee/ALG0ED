/* 
 * File:   misFunciones.h
 * Author: Ivan
 *
 * Created on 12 de octubre de 2024, 8:05
 */

#ifndef MISFUNCIONES_H
#define MISFUNCIONES_H

#include <iostream>
#include <iomanip> 
#include <fstream>
#include <cstring>

#include "Pedido.h"
#include "Lista.h"
#include "funciones.h"

using namespace std;

void cargarDatosLista(const char *filename, struct Lista &lista);
char *leerCadena(ifstream &arch, int n, char c);
struct Pedido calcularPedido(char *codigo, char complejidad, int disponibilidad, 
        double distancia, int horaPunta);
void ordenarLista(struct Lista &lista);
struct Nodo * obtenerUltimo(struct Lista &lista);
void segundaPasada(struct Lista &lista);

#endif /* MISFUNCIONES_H */


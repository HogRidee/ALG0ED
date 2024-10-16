/* 
 * File:   funciones.h
 * Author: Ivan
 *
 * Created on 16 de octubre de 2024, 16:10
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>

#include "Cola.h"
#include "funcionesLista.h"
#include "funcionesCola.h"
#include "Evento.h"

using namespace std;

void encolarConPrioridad(struct Cola &cola, struct Evento evento);
void insertarConPrioridad(struct Lista &lista, struct Evento evento);

#endif /* FUNCIONES_H */


// -*- C++ -*-

/* 
 * File:   funcionesCola.h
 * Author: ANA RONCAL
 *
 * Created on 1 de setiembre de 2024, 23:02
 */

#ifndef FUNCIONESCOLA_H
#define FUNCIONESCOLA_H

#include "Paciente.h"

void construir(struct Cola & );       
bool esColaVacia(const struct Cola & cola);
void encolar(struct Cola & cola, struct Paciente elemento);
void imprime(const struct Cola & cola);
struct Paciente desencolar(struct Cola & cola);

int longitud(const struct Cola & cola);
void destruirCola(struct Cola & cola);

void encolarConPrioridad(struct Cola &cola, struct Paciente pacientes);

#endif /* FUNCIONESCOLA_H */
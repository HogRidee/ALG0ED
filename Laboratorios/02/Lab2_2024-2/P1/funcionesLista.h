/* 
 * File:   funcionesLista.h
 * Author: ANA RONCAL
 *
 * Created on 1 de setiembre de 2024, 22:27
 */

#ifndef FUNCIONESLISTA_H
#define FUNCIONESLISTA_H

void construir(struct Lista &);
const bool esListaVacia(const struct Lista &);
int longitud(const struct Lista &);

void insertarAlInicio(struct Lista &, struct Paciente);
void insertarAlFinal(struct Lista &, struct Paciente);
void insertarEnOrden(struct Lista &, struct Paciente);

struct Nodo * crearNodo(struct Paciente elemento, struct Nodo *);
struct Nodo * obtenerUltimoNodo(const struct Lista &);
//struct Nodo * obtenerNodoAnterior(const struct Lista &, struct Paciente);
struct Nodo * seEncuentra(const struct Lista &, struct Paciente);
struct Paciente retornaCabeza(const struct Lista & lista);

void eliminaNodo(struct Lista &, struct Paciente);
void eliminaCabeza(struct Lista &);
void eliminaCola(struct Lista);

void destruir(struct Lista &);
void imprime(const struct Lista &);

void insertarConPrioridad(struct Lista &lista, struct Paciente paciente);

#endif /* FUNCIONESLISTA_H */
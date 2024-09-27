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

void insertarAlInicio(struct Lista &, struct Posicion posicion);
void insertarAlFinal(struct Lista &, struct Posicion posicion);

struct Nodo * crearNodo(struct Posicion elemento, struct Nodo *);
struct Nodo * obtenerUltimoNodo(const struct Lista &);
struct Posicion retornaCabeza(const struct Lista & lista);

void eliminaCabeza(struct Lista &);
void eliminaCola(struct Lista);

void destruir(struct Lista &);
void imprime(const struct Lista &);

#endif /* FUNCIONESLISTA_H */
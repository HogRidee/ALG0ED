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

//void insertarAlInicio(struct Lista &, struct Evento);
//void insertarAlFinal(struct Lista &, struct Evento);
//void insertarEnOrden(struct Lista &, struct Evento);
//
struct Nodo * crearNodo(struct Evento elemento, struct Nodo *);
//struct Nodo * obtenerUltimoNodo(const struct Lista &);
//struct Nodo * obtenerNodoAnterior(const struct Lista &, struct Evento);
//struct Nodo * seEncuentra(const struct Lista &, struct Evento);
struct Evento retornaCabeza(const struct Lista & lista);

void eliminaNodo(struct Lista &, struct Evento);
void eliminaCabeza(struct Lista &);
void eliminaCola(struct Lista);

void destruir(struct Lista &);
void imprime(const struct Lista &);

#endif /* FUNCIONESLISTA_H */
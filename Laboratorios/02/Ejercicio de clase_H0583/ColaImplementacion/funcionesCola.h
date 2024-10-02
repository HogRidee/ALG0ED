
/* 
 * File:   funcionesCola.h
 * Author: anaro
 *
 * Created on 26 de setiembre de 2024, 15:43
 */

#ifndef FUNCIONESCOLA_H
#define FUNCIONESCOLA_H

void construir(struct Cola & cola);
bool esColaVacia(const struct Cola & cola);
void encolar(struct Cola & cola, int elemento);
void imprime(const struct Cola & cola);
int desencolar(struct Cola & cola);

#endif /* FUNCIONESCOLA_H */

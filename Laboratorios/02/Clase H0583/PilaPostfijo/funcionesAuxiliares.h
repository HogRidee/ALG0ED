
/* 
 * File:   funcionesAuxiliares.h
 * Author: anaro
 *
 * Created on 19 de setiembre de 2024, 11:59
 */

#ifndef FUNCIONESAUXILIARES_H
#define FUNCIONESAUXILIARES_H

void notacionPostfija(struct Pila & pila);
int esOperador(char * c);
int opera(char * c, int operando1, int operando2);

#endif /* FUNCIONESAUXILIARES_H */

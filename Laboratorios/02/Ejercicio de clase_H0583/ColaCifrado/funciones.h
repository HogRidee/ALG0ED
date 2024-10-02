/* 
 * File:   funciones.h
 * Author: anaro
 *
 * Created on 26 de setiembre de 2024, 12:46
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H
void cifrarMensaje(struct Cola & clave, struct Cola & copiaClave);
void codificar(struct Cola & clave, char mensaje [], char codificado []);
void decodificar(struct Cola & copiaClave, char codificado[], char decodificado []) ;
#endif /* FUNCIONES_H */

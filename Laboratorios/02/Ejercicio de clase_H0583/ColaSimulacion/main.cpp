/* 
 * File:   main.cpp
 * Author: Ana Roncal
 *
 * Created on 1 de setiembre de 2024, 22:58
 */

#include <iostream>
#include <iomanip>
#include "Cola.h"
#include "funcionesCola.h"
#include "funciones.h"
using namespace std;

/*
 * IMPLEMENTACIÓN DE UNA COLA
 * USANDO PUNTEROS CABEZA Y COLA
 * ALGORITMIA Y ESTRUCTURA DE DATOS 2024-2
 * NUEVA VERSIÓN
 */

/*Añadir más cajeros durante la mayor carga de trabajo
  Solo hay una fila y la primera persona que llegue será la primera en ser
  atendida
  Los clientes llegan por término medio cada 15 segundos
  Si hay disponible un cajero el proceso empieza después de la llegada
  El proceso total tarda como promedio, dos minutos, desde el momento que el 
  cliente llega hasta el cajero
 */
int main(int argc, char** argv) {
    
    struct Cola cola;
    
    construir(cola);
    
    cout<<setw(32)<<"RESULTADOS DE LA SIMULACIÓN"<<endl;
    cout<<setw(30)<<"DEL DESPACHO DE ENTRADAS"<<endl;
    cout<<"Número de cajeros"<<setw(17)<<"Tiempo promedio"<<endl;
    
    simulacionDeColas(cola);
        
    return 0;
}


/* 
 * File:   funciones.cpp
 * Author: ANA RONCAL
 * 
 * Created on 26 de setiembre de 2024, 13:25
 */

#include <iostream>
#include <iomanip>
#include "Cliente.h"
#include "funcionesCola.h"
#include "funcionesCliente.h"
using namespace std;
#define PROCESO 120
#define MAX_CAJEROS 10
#define NUM_CLIENTES 100

void simulacionDeColas(struct Cola & cola) {

    struct Cliente cliente;
    int tiempoTotal, promedioTiempo, salidas;
    int cajerosTiempo[MAX_CAJEROS]{};
    
    for (int cajeros = 0; cajeros < MAX_CAJEROS; cajeros++) {

        /*configurar el tiempo de cada cajero*/
        for(int i = 0; i < cajeros; i++)
            cajerosTiempo[i] = 0;

        /*cargar la cola de clientes*/
        for(int cont = 1; cont <= NUM_CLIENTES; cont++){
            cliente.horaLlegada = cont * 15;
            cliente.horaSalida = 0;
            encolar(cola, cliente);
        }

        tiempoTotal = 0;
        /*procesar todos los clientes de la cola*/
        while (not esColaVacia(cola)) {
            for(int i = 0; i<= cajeros; i++){
                if(not esColaVacia(cola)){
                    struct Cliente cliente = desencolar(cola);
                    if(getHoraLlegada(cliente) > cajerosTiempo[i])
                        salidas = getHoraLlegada(cliente) + PROCESO;
                    else
                        salidas = cajerosTiempo[i] + PROCESO;
                    setHoraSalida(cliente, salidas);
                    cajerosTiempo[i] = salidas;
                    tiempoTotal += totalTiempo(cliente);
                }
            }
           
        }

        /*Mostrar resultados de la simulación*/
        promedioTiempo = tiempoTotal / NUM_CLIENTES;
        cout << setw(8) << cajeros + 1;
        cout << setw(22) << promedioTiempo << endl;
    }
}
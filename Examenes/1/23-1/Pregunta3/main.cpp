/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 17 de octubre de 2024, 12:38
 */

#include "misFunciones.h"

int main(int argc, char** argv) {

    int nPeleas, nivelAtaque;
    
    struct Lista listaGuerreros;
    construir(listaGuerreros);
    
    leerGuerreros(listaGuerreros, nPeleas);
    
    cout << "Lista Guerreros: ";
    imprime(listaGuerreros);
    cout << endl;
    
    struct Lista bowser, peach, donkeykong;
    construir(bowser);
    construir(peach);
    construir(donkeykong);
    
    formarEjercitos(listaGuerreros, bowser, peach, donkeykong);
    
    destruir(listaGuerreros);
    
    cout << "Los ejércitos formados son:" << endl;
    cout << "Ejército 1 - Bowser: ";
    nivelAtaque = imprime(bowser);
    cout << "Nivel de Ataque Total del Ejército 1: " << nivelAtaque << endl << endl;
    
    cout << "Ejército 2 - Peach: ";
    nivelAtaque = imprime(peach);
    cout << "Nivel de Ataque Total del Ejército 2: " << nivelAtaque << endl << endl;
    
    cout << "Ejército 3 - Donkey Kong: ";
    nivelAtaque = imprime(donkeykong);
    cout << "Nivel de Ataque Total del Ejército 3: " << nivelAtaque << endl << endl;
    
    return 0;
}


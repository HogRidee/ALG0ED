#include "misFunciones.h"

void leerTipoProductos(struct Lista *listas, int &nListas, const char *filename){
    ifstream arch(filename, ios::in);
    if(not arch.is_open()){
        cout << "ERROR: No se pudo abrir el archivo " << filename << endl;
        exit(1);
    }
    char tipo;
    while(true){
        arch >> tipo;
        if(arch.eof()) break;
        construir(listas[nListas]);
        listas[nListas].tipo = tipo;
        leerCalorias(arch, listas[nListas]);
        nListas++;
        if(nListas == 6) break;
    }
}

void leerCalorias(ifstream &arch, struct Lista &lista){
    int calorias;
    char c;
    while(true){
        arch.get(c);
        if(c == '\n') break;
        arch >> calorias;
        insertarAlFinal(lista, calorias);
    }
}

void leerFormula(struct Formula *formula, int &nFormulas, const char *filename){
    ifstream arch(filename, ios::in);
    if(not arch.is_open()){
        cout << "ERROR: No se pudo abrir el archivo " << filename << endl;
        exit(1);
    }
    char tipo;
    while(true){
        arch >> tipo;
        if(arch.eof()) break;
        formula[nFormulas].tipo = tipo;
        arch >> formula[nFormulas].cantidad;
        arch >> formula[nFormulas].caloriasMaximas;
        nFormulas++;
    }
}

bool verificarExistencia(struct Lista *listas, struct Formula *formula, 
        int nListas, int nFormulas){
    if(nFormulas > nListas) return false;
    int maximo, cantidad, pos, suma;
    char tipo;
    for(int i = 0; i < nFormulas; i++){
        tipo = formula[i].tipo;
        cantidad = formula[i].cantidad;
        maximo = formula[i].caloriasMaximas;
        pos = buscarProducto(listas, nListas, tipo);
        if(pos == -1) return false;
        if(cantidad > listas[pos].longitud) return false;
        suma = 0;
        struct Nodo * recorrido = listas[pos].cabeza;
        for(int i = 0; i < cantidad; i++){
            suma += recorrido->elemento;
            recorrido = recorrido->siguiente;
        }
        if(suma > maximo) return false;
    }
    return true;
}

int buscarProducto(struct Lista *listas, int nListas, char tipo){
    for(int i = 0; i < nListas; i++){
        if(listas[i].tipo == tipo) return i;
    }
    return -1;
}

void imprimeListaFinal(struct Lista *listas, struct Formula *formula, int nListas,
        int nFormulas){
    int pos, i = 1, pos2;
    char tipo, tipo2;
    for(int i = 0; i < nFormulas; i++){
        tipo = formula[i].tipo;
        pos = buscarProducto(listas, nListas, tipo);
        modificaLista(listas[pos], formula[i]);
    }
    tipo = formula[0].tipo;
    pos = buscarProducto(listas, nListas, tipo);
    while(true){
        tipo2 = formula[i].tipo;
        pos2 = buscarProducto(listas, nListas, tipo2);
        combinaListas(listas[pos], listas[pos2]);
        i++;
        if(i == nFormulas) break;
    }
    imprime(listas[pos]);
}

void modificaLista(struct Lista &lista, struct Formula &formula){
    int cantidad = formula.cantidad;
    struct Nodo * recorrido = lista.cabeza;
    struct Nodo * anterior = nullptr;
    for(int i = 0; i < cantidad; i++){
        anterior = recorrido;
        recorrido = recorrido->siguiente;
    }
    anterior->siguiente = nullptr;
}

void combinaListas(struct Lista &lista1, struct Lista &lista2){
    struct Nodo * recorrido = lista1.cabeza;
    struct Nodo * anterior = nullptr;
    struct Nodo * nuevo = nullptr;
    while(not esListaVacia(lista2)){
        if(recorrido == nullptr){
            anterior->siguiente = lista2.cabeza;
            break;
        }
        else{
            if(recorrido->elemento > retornaCabeza(lista2)){
                if(anterior == nullptr){
                    nuevo = lista2.cabeza;
                    lista2.cabeza = nuevo->siguiente;
                    nuevo->siguiente = recorrido;
                    lista1.cabeza = nuevo;
                    anterior = nuevo;
                }
                else{
                    nuevo = lista2.cabeza;
                    lista2.cabeza = nuevo->siguiente;
                    nuevo->siguiente = recorrido;
                    anterior->siguiente = nuevo;
                    anterior = nuevo;
                }
            }
            else{
                anterior = recorrido;
                recorrido = recorrido->siguiente;
            }
        }
    }
}
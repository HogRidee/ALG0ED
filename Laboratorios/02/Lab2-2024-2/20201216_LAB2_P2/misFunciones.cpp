#include "misFunciones.h"

void cargarDatosLista(const char *filename, struct Lista &lista){
    ifstream arch(filename, ios::in);
    if(arch.eof()){
        cout << "ERROR: No se pudo abrir el archivo " << filename << endl;
        exit(1);
    }
    struct Pedido pedido;
    int disponibilidad, horaPunta;
    double distancia;
    char *codigo, complejidad, c;
    while(true){
        codigo = leerCadena(arch, 10, ',');
        if(arch.eof()) break;
        arch >> complejidad >> c >> disponibilidad >> c >> distancia >> c;
        arch >> horaPunta;
        arch.get();
        pedido = calcularPedido(codigo, complejidad, disponibilidad, distancia, 
                horaPunta);
        insertarAlFinal(lista, pedido);
    }
}

char *leerCadena(ifstream &arch, int n, char c){
    char buffer[n], *cad;
    arch.getline(buffer, n, c);
    if(arch.eof()) return nullptr;
    cad = new char[strlen(buffer)+1];
    strcpy(cad, buffer);
    return cad;
}

struct Pedido calcularPedido(char *codigo, char complejidad, int disponibilidad, 
        double distancia, int horaPunta){
    struct Pedido pedido;
    pedido.id = codigo;
    if(complejidad == 'b') pedido.tiempoPreparacion = 10;
    if(complejidad == 'm') pedido.tiempoPreparacion = 20;
    if(complejidad == 'a') pedido.tiempoPreparacion = 30;
    if(disponibilidad == 0) pedido.tiempoPreparacion += 5;
    // sabemos que la velocidad promedio es 45 km/h o 0.75 km/m o 3/4 km/m
    pedido.tiempoEstimadoViaje = (distancia* 4)/3;
    if(horaPunta == 1) pedido.tiempoEstimadoViaje += 10;
    return pedido;
}

void ordenarLista(struct Lista &lista){
    struct Lista lista3, lista4, lista5, lista6;
    construir(lista3);
    construir(lista4);
    construir(lista5);
    construir(lista6);
    struct Nodo * recorrido = lista.cabeza;
    struct Nodo * siguiente = nullptr;
    while(recorrido){
        int tiempo = (recorrido->elemento.tiempoEstimadoViaje + recorrido->elemento.tiempoPreparacion);
        int unidad = tiempo % 10;
        siguiente = recorrido;
        if(unidad == 3){
            if(esListaVacia(lista3)){
                lista3.cabeza = recorrido;
                lista3.longitud++;
            }
            else{
                lista3.cabeza->siguiente = recorrido;
                lista3.longitud++;
            }
        }
        if(unidad == 4){
            if(esListaVacia(lista4)){
                lista4.cabeza = recorrido;
                lista4.longitud++;
            }
            else{
                lista4.cabeza->siguiente = recorrido;
                lista4.longitud++;
            }
        }
        if(unidad == 5){
            if(esListaVacia(lista5)){
                lista5.cabeza = recorrido;
                lista5.longitud++;
            }
            else{
                lista5.cabeza->siguiente = recorrido;
                lista5.longitud++;
            }
        }
        if(unidad == 6){
            if(esListaVacia(lista6)){
                lista6.cabeza = recorrido;
                lista6.longitud++;
            }
            else{
                lista6.cabeza->siguiente = recorrido;
                lista6.longitud++;
            }
        }
        recorrido = siguiente->siguiente;
    }
    struct Nodo * ultimo = obtenerUltimo(lista3);
    ultimo->siguiente = lista4.cabeza;
    ultimo = obtenerUltimo(lista4);
    ultimo->siguiente = lista5.cabeza;
    ultimo = obtenerUltimo(lista5);
    ultimo->siguiente = lista6.cabeza;
    ultimo = obtenerUltimo(lista6);
    ultimo->siguiente = nullptr;
    lista.cabeza = lista3.cabeza;
    // VAMOS A LA SEGUNDA PASADA
    segundaPasada(lista);
}

struct Nodo * obtenerUltimo(struct Lista &lista){
    struct Nodo * recorrido = lista.cabeza;
    for(int i = 0; i < longitud(lista)-1; i++){
        recorrido = recorrido->siguiente;
    }
    return recorrido;
}

void segundaPasada(struct Lista &lista){
    struct Lista lista2, lista3, lista4;
    construir(lista2);
    construir(lista3);
    construir(lista4);
    struct Nodo * recorrido = lista.cabeza;
    struct Nodo * siguiente = nullptr;
    while(recorrido){
        int tiempo = (recorrido->elemento.tiempoEstimadoViaje + recorrido->elemento.tiempoPreparacion);
        int decena = tiempo / 10;
        siguiente = recorrido;
        if(decena == 2){
            if(esListaVacia(lista2)){
                lista2.cabeza = recorrido;
                lista2.longitud++;
            }
            else{
                lista2.cabeza->siguiente = recorrido;
                lista2.longitud++;
            }
        }
        if(decena == 3){
            if(esListaVacia(lista3)){
                lista3.cabeza = recorrido;
                lista3.longitud++;
            }
            else{
                lista3.cabeza->siguiente = recorrido;
                lista3.longitud++;
            }
        }
        if(decena == 4){
            if(esListaVacia(lista4)){
                lista4.cabeza = recorrido;
                lista4.longitud++;
            }
            else{
                lista4.cabeza->siguiente = recorrido;
                lista4.longitud++;
            }
        }
        recorrido = siguiente->siguiente;
    }
    struct Nodo * ultimo = obtenerUltimo(lista2);
    ultimo->siguiente = lista3.cabeza;
    ultimo = obtenerUltimo(lista3);
    ultimo->siguiente = lista4.cabeza;
    ultimo = obtenerUltimo(lista4);
    ultimo->siguiente = nullptr;
    lista.cabeza = lista2.cabeza;
}
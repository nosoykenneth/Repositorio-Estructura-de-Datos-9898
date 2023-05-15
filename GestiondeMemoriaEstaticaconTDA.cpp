#include <iostream>

using namespace std;

// Estructura para la memoria estática
struct MemoriaEstatica {
    int tamanio;
    int* memoria;
};

// Función para inicializar la memoria estática
void inicializarMemoria(MemoriaEstatica &mem, int tamanio) {
    mem.tamanio = tamanio;
    mem.memoria = new int[tamanio];
}

// Función para escribir en la memoria estática
void escribirMemoria(MemoriaEstatica &mem, int posicion, int valor) {
    if (posicion >= 0 && posicion < mem.tamanio) {
        mem.memoria[posicion] = valor;
    }
}

// Función para leer de la memoria estática
int leerMemoria(MemoriaEstatica &mem, int posicion) {
    if (posicion >= 0 && posicion < mem.tamanio) {
        return mem.memoria[posicion];
    }
    return 0;
}

// Función para liberar la memoria estática
void liberarMemoria(MemoriaEstatica &mem) {
    delete[] mem.memoria;
    mem.tamanio = 0;
}

int main() {
    // Creamos la estructura de memoria estática
    MemoriaEstatica mem;
    int tamanio = 10;

    // Inicializamos la memoria estática
    inicializarMemoria(mem, tamanio);

    // Escribimos y leemos algun valor
    escribirMemoria(mem, 3, 42);
    int valor = leerMemoria(mem, 3);
    cout << "El valor en la posicion 3 es: " << valor << endl;

    // Liberamos la memoria estática
    liberarMemoria(mem);

    return 0;
}

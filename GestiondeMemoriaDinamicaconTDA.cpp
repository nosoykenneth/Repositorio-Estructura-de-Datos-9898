#include <iostream>

using namespace std;

struct MemoriaDinamica {
    int tamanio;
    int *memoria;
};

void reservarMemoria(MemoriaDinamica &mem, int tamanio) {
    mem.tamanio = tamanio;
    mem.memoria = new int[tamanio];
}

void escribirMemoria(MemoriaDinamica &mem, int posicion, int valor) {
    if (posicion >= 0 && posicion < mem.tamanio) {
        mem.memoria[posicion] = valor;
    }
}

int leerMemoria(MemoriaDinamica &mem, int posicion) {
    if (posicion >= 0 && posicion < mem.tamanio) {
        return mem.memoria[posicion];
    }
}

void liberarMemoria(MemoriaDinamica &mem) {
    delete[] mem.memoria;
}

int main() {
    MemoriaDinamica mem;
    int tamanio = 10;
    reservarMemoria(mem, tamanio);

    // Escribimos y leemos algun valor de la memoria
    escribirMemoria(mem, 0, 5);
    int valor = leerMemoria(mem, 0);
    cout << "El valor en la posicion 0 es: " << valor << endl;

    liberarMemoria(mem);
    return 0;
}

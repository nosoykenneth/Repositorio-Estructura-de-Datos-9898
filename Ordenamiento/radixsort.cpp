#include <iostream>
using namespace std;

int getMax(int arreglo[], int longitud) {
    int maximo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }
    return maximo;
}

void countSort(int arreglo[], int longitud, int exp) {
    int conteo[10] = {0};
    int resultado[longitud];

    for (int i = 0; i < longitud; i++) {
        conteo[(arreglo[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        conteo[i] += conteo[i - 1];
    }

    for (int i = longitud - 1; i >= 0; i--) {
        resultado[conteo[(arreglo[i] / exp) % 10] - 1] = arreglo[i];
        conteo[(arreglo[i] / exp) % 10]--;
    }

    for (int i = 0; i < longitud; i++) {
        arreglo[i] = resultado[i];
    }
}

void radixSort(int arreglo[], int longitud) {
    int maximo = getMax(arreglo, longitud);

    for (int exp = 1; maximo / exp > 0; exp *= 10) {
        countSort(arreglo, longitud, exp);
    }
}

int main() {
    int arreglo[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    radixSort(arreglo, longitud);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < longitud; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

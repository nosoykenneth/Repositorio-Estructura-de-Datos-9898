#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int particionar(int arreglo[], int izquierda, int derecha) {
    int pivote = arreglo[izquierda];
    int i = izquierda + 1;
    int j = derecha;

    while (i <= j) {
        while (i <= j && arreglo[i] <= pivote) {
            i++;
        }
        while (i <= j && arreglo[j] >= pivote) {
            j--;
        }
        if (i < j) {
            intercambiar(arreglo[i], arreglo[j]);
        }
    }

    intercambiar(arreglo[izquierda], arreglo[j]);
    return j;
}

void quicksort(int arreglo[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int indicePivote = particionar(arreglo, izquierda, derecha);
        quicksort(arreglo, izquierda, indicePivote - 1);
        quicksort(arreglo, indicePivote + 1, derecha);
    }
}

int main() {
    int arreglo[] = {21, 40, 4, 9, 10, 35};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    quicksort(arreglo, 0, longitud - 1);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < longitud; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

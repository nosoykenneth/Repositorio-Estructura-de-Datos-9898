#include <iostream>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void shellSort(int arreglo[], int longitud) {
    for (int gap = longitud / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < longitud; i++) {
            int temp = arreglo[i];
            int j;
            for (j = i; j >= gap && arreglo[j - gap] > temp; j -= gap) {
                intercambiar(arreglo[j], arreglo[j - gap]);
            }
            arreglo[j] = temp;
        }
    }
}

int main() {
    int arreglo[] = {21, 40, 4, 9, 10, 35};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    shellSort(arreglo, longitud);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < longitud; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

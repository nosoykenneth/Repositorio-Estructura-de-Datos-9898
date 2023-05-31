#include <iostream>
#include <stack>

using namespace std;

void DecimalABinario(int decimal) {
    stack<int> pilaBinaria;

    while (decimal > 0) {
        int residuo = decimal % 2;
        pilaBinaria.push(residuo);
        decimal /= 2;
    }

    while (!pilaBinaria.empty()) {
        cout << pilaBinaria.top();
        pilaBinaria.pop();
    }
}

int main() {
    int numeroDecimal;

    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;

    cout << "El numero binario equivalente es: ";
    DecimalABinario(numeroDecimal);

    return 0;
}
#include <iostream>
#include <stack>

using namespace std;

int main()

{
    stack<int> pila;
    pila.push(50); // Insertar elemento 10 en la pila
    pila.push(30); // Insertar elemento 20 en la pila
    pila.push(20); // Insertar elemento 30 en la pila
    while (!pila.empty())
    {
        int valor = pila.top();
        pila.pop();
        cout << "Elemento desapilado: " << valor << endl;
    }
    return 0;
}


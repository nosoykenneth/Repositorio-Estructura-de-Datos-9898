#include <iostream>
#include <stack>

using namespace std;

int main()

{
    stack<int> pila;
    pila.push(10); // Insertar elemento 10 en la pila
    pila.push(20); // Insertar elemento 20 en la pila
    pila.push(30); // Insertar elemento 30 en la pila
    while (!pila.empty())
    {
        cout << pila.top() << " "; // Imprimir elemento superior de la pila
        pila.pop();                     // Eliminar elemento superior de la pila
    }
    return 0;
}

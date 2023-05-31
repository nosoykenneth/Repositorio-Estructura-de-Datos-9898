#include <iostream>

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertar(Nodo **cabeza, int valor)
{

    Nodo *nuevoNodo = new Nodo;
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
}

void imprimirLista(Nodo *cabeza)
{
    Nodo *actual = cabeza;
    while (actual != nullptr)
    {
        std::cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    std::cout << std::endl;
}

int main()
{

    Nodo *miLista = nullptr;

    insertar(&miLista, 5);
    insertar(&miLista, 10);
    insertar(&miLista, 15);
    insertar(&miLista, 20);

    imprimirLista(miLista);

    Nodo *actual = miLista;
    while (actual != nullptr)
    {
        Nodo *temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    return 0;
}

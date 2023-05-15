
#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// declaramos funciones
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

// main
int main()
{
    Nodo *lista = NULL;

    int dato;
    char rpt;

    cout << "Ingrese un numero (0 para mostrar lista):";
    cin >> dato;

    while (dato != 0)
    {
        insertarLista(lista, dato);
        cout << "\nIngrese un numero (0 para mostrar lista):";
        cin >> dato;
    }

    mostrarLista(lista);

    getch();
    return 0;
}
// fin del main

// Se crea un nuevo nodo
void insertarLista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *i = lista;

    if (lista == NULL)
        lista = nuevo_nodo;
    else
    {
        while (i->siguiente != NULL)
            i = i->siguiente;
        i->siguiente = nuevo_nodo;
    }

    cout << "Elemento " << n << " insertado a lista correctamente\n";
}

// Se crea un nuevo nodo(actual)
void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo();

    // se iguala ese nuevo nodo(actual) a lsita
    actual = lista;

    // Se recorre la lista de inicio a fin
    while (actual != NULL)
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

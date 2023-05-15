#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    Nodo *siguiente;
    int dato;
};

Nodo *lista = NULL;
int dato;
void menu();
void insertarlista(Nodo *&, int);
void mostrarlista(Nodo *);
void eliminarlista(Nodo *&, int &);

int main()
{

    menu();

    getch();
    return 0;
}

void menu()
{
    int opc;
    do
    {
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar elemento en la lista." << endl;
        cout << "2. Mostrar elementos de la lista." << endl;
        cout << "3. Vaciar la lista" << endl;
        cout << "4. Salir" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "Digite el elemento a ingresar: ";
            cin >> dato;
            insertarlista(lista, dato);
            cout << "\n";
            system("pause");
            break;

        case 2:
            cout << "\tMostrando elementos de la lista\n"
                 << endl;
            mostrarlista(lista);
            cout << "\n";
            system("pause");
            break;

            system("pause");
            break;
        case 3:
            eliminarlista(lista, dato);
            cout << "\n";
            system("pause");
            break;
        case 4:
            break;
        }
        system("cls");
    } while (opc != 4);
}

void insertarlista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;

    cout << n << " se ha agregado correctamente a la lista." << endl;
}

void mostrarlista(Nodo *lista)
{
    Nodo *actual = lista;

    while (actual != NULL)
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

void eliminarlista(Nodo *&lista, int &n)
{
    char opc;

    cout << "¿Seguro de eliminar todos los elementos de la lista? (S/N): ";
    cin >> opc;

    if (((opc == 'S') || (opc == 's')))

        while (lista != NULL)
        {
            Nodo *aux = lista;
            n = aux->dato;
            lista = aux->siguiente;
            delete aux;
        }
    if (((opc == 'S') || (opc == 's')))
    {
        cout << "\tTodos los elementos de la lista han sido eliminados.\n"
             << endl;
    }
    else
    {
        cout << "\tVolver.\n"
             << endl;
    }
}
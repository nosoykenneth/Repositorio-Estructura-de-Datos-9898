#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){

    string nombre;
    list<string> nombres;

    cout<<"Ingrese un nombre (digite fin para terminar): ";

    while (cin>>nombre && nombre != "fin") {
        nombres.push_back(nombre);
    }

    nombres.sort(); // Ordenar la lista de nombres en orden alfabético

    cout << "Nombres ordenados:\n";
    for (auto n : nombres) {
        cout << n << endl;
    }
    
    return 0;
}
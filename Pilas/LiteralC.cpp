#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> cola;

    cola.push(10);
    cola.push(20);
    cola.push(30);

    while (!cola.empty()) {
        int elemento = cola.front();
        cola.pop();
        cout << "Elemento desencolado: " << elemento << endl;
    }

    return 0;
}

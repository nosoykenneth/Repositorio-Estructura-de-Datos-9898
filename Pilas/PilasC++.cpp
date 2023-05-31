#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> pila;

    pila.push(10);
    pila.push(20);
    pila.push(30);

    while (!pila.empty())
    {
        cout<<pila.top()<<" ";
        pila.pop();
    }

    return 0;
    
    

}
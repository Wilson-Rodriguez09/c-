#include "eratostenes.hpp"
#include <iostream>
using namespace std;

int main(){
    int valor;
    cout << "Ingrese un numero: ";
    cin >> valor;
    cout << endl;
    cribaEratostenes(valor);
}
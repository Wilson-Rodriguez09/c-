#include <iostream>
#include "pascal.hpp"

using namespace std;

int main() {
    int n;

    cout << "Ingrese el numero de filas para el Triangulo de Pascal: ";
    cin >> n;

    if (n <= 0) {
        cout << "ingrese un numero mayor que 0." << endl;
    } else {
        pascal(n);
    }

    return 0;
}

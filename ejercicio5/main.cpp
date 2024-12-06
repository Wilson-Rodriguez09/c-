#include <iostream>
#include "collatz.hpp"

using namespace std;

int main() {
    int inicio, fin;

    cout << "Ingrese el inicio del rango: ";
    cin >> inicio;
    cout << "Ingrese el fin del rango: ";
    cin >> fin;

    if (inicio > 0 && fin > 0 && inicio <= fin) {
        secuenciaCollatz(inicio, fin);
    } else {
        cout << "Rango no valido. tiene que ser el inicio  menor o igual al fin, y juntos positivos." << endl;
    }

    return 0;
}

#include <iostream>
#include "collatz.hpp"

using namespace std;

int longitudCollatz(int n) {
    int longitud = 1;  

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;  
        }
        longitud++;  
    }
    return longitud;
}

void secuenciaCollatz(int inicio, int fin) {
    int numeroMaximo = inicio;
    int longitudMaxima = longitudCollatz(inicio);

    for (int i = inicio + 1; i <= fin; i++) {
        int longitudActual = longitudCollatz(i);
        if (longitudActual > longitudMaxima) {
            longitudMaxima = longitudActual;
            numeroMaximo = i;
        }
    }

    cout << "El numero con la secuencia mas larga es: " << numeroMaximo << endl;
    cout << "La longitud de la secuencia es: " << longitudMaxima << endl;
}

#include <iostream>
#include "frecuenciaCaracteres.hpp"

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    map<char, int> frecuencias = contarFrecuencia(cadena);
    cout << "\nFrecuencia de caracteres:" << endl;
    for (const auto& par : frecuencias) {
        cout << "'" << par.first << "' aparece " << par.second << " veces" << endl;
    }

    char masRepetido = caracterMasRepetido(cadena);
    cout << "\nEl caracter mas repetido es: '" << masRepetido << "'" << endl;

    return 0;
}

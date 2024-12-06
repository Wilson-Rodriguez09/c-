#include <iostream>
#include "funciones.hpp"

using namespace std;

// PROTOTIPO
int main(int argc, const char * argv[]){
//  Usando funciones void, sin retorno
    suma(2, 3);


// Usando funciones void, con retorno

    float resMulti = 0.0;
    resMulti = multiplica(3.2,2);
    cout << "El resultado de la multiplicacion es:" <<resMulti <<endl;

    return 0;
}

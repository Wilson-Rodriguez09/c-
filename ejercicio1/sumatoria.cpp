#include "sumatoria.hpp"
#include <iostream>

using namespace std;

void suma(int num){
    int suma = 0;
    for(int i = 1; i <=num; i++){
        suma += i;
    }
    cout << "la suma es: "<<suma <<endl;
}
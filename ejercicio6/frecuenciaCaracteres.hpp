#ifndef frecuenciaCaracteres_hpp
#define frecuenciaCaracteres_hpp
#include <string>
#include <map>

using namespace std;

map<char, int> contarFrecuencia(const string& cadena);

char caracterMasRepetido(const string& cadena);

#endif
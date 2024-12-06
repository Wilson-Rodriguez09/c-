#ifndef sudoku_hpp
#define sudoku_hpp
#include <stdio.h>

using namespace std;

bool validarFilas(int tablero[9][9]);
bool validarColumnas(int tablero[9][9]);
bool validarSubcuadros(int tablero[9][9]);
bool validarSudoku(int tablero[9][9]);

#endif /* funciones_hpp */



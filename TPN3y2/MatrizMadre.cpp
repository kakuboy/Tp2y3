#include "MatrizMadre.h"
#include <time.h>
#include <cstdlib>

MatrizMadre::MatrizMadre()
{
    this->matriz = nullptr;
}

int **MatrizMadre::generarMatriz(int fila, int columna)
{
    int **matriz;
    matriz = new int*[fila];

    for (int i=0;i<fila;i++) {
        matriz[i] = new int[columna];
        for (int j=0;j<columna;j++) {
            matriz[i][j] = rand()%100;
        }
    }
    return matriz;
}

int **MatrizMadre::generarMatrizAbierta(int **&matriz, int fila, int columna)
{
    int **matrizAuxiliar;
    bool abierto = false;

    matriz = generarMatriz(fila, columna);
}

void MatrizMadre::generarMatrizAleatoria(int **&matriz, int fila, int columna)
{
    srand(time(nullptr));
    int x;

    for (int i=0;i<fila;i++) {
        for (int j=0;j<columna;j++) {
            x=rand()%2;
            matriz[i][j] = x;
        }
    }
}

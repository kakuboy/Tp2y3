#ifndef MATRIZMADRE_H
#define MATRIZMADRE_H


class MatrizMadre
{
    int **matriz;
public:
    MatrizMadre();
    int **generarMatriz(int fila, int columna);
    int **generarMatrizAbierta(int **&matriz, int fila, int columna);
    void generarMatrizAleatoria(int **&matriz, int fila, int columna);
};

#endif // MATRIZMADRE_H

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
    void AbrirMatriz(int **&matrizaux, int **&matriz,int dim, int primerf, int primerc, int cantceros);

    int cantidadceros(int **&matriz , int fila , int columna);
    int Primerceros(int **&matriz , int fila , int columna , int *k , int *l);
    void recursivabro(int **& matriz , int dim , int primerf , int primerc ,int **& matrizaux , int cantceros, int ulti, int ultj, int ultn,int contceros,bool &comprobacion);
    bool comprobarmatrizbase(int **& matriz , int dim , int primerf , int primerc ,int **& matrizaux , int cantceros);
};

#endif // MATRIZMADRE_H

#include "MatrizMadre.h"
#include <time.h>
#include <cstdlib>

MatrizMadre::MatrizMadre()
{
    this->matriz = nullptr;
}

int **MatrizMadre::generarMatriz(int fila, int columna)// crea la matriz pasando la dimencion
{
    srand(time(nullptr));
    int x;

    for (int i=0;i<fila;i++) {
        for (int j=0;j<columna;j++) {
            x=rand()%2;
            matriz[i][j] = x;
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

    /*void MatrizMadre::generarMatrizAleatoria(int **&matriz, int fila, int columna)// rellena matriz de unos y ceros
    {
    srand(time(nullptr));
    int x;

    for (int i=0;i<fila;i++) {
        for (int j=0;j<columna;j++) {
            x=rand()%2;
            matriz[i][j] = x;
        }
    }
    }*/

int MatrizMadre::cantidadceros(int **&matriz , int fila , int columna){
    int acum1 = 0;
    matriz = new int*[fila];

    for (int i=0;i<fila;i++) {
        matriz[i] = new int[columna];
        for (int j=0;j<columna;j++) {
            if(matriz[i][j]==0){
                acum1++;
            }
        }
    }
    return acum1;
}

int MatrizMadre::Primerceros(int **&matriz , int fila , int columna , int *k , int *l){
    matriz = new int*[fila];

    for (int i=0;i<fila;i++) {
        matriz[i] = new int[columna];
        for (int j=0;j<columna;j++) {
            if(matriz[i][j]==0){
                *k=i;
                *l=j;
                return 0;
            }
        }
    }
    return 0;
}

void MatrizMadre::recursivabro(int **& matriz , int dim , int primerf , int primerc ,int **& matrizaux , int cantceros, int ulti, int ultj, int ultn,int contceros,bool &comprobacion){
    //ESTE B TIENE QUE SER 0
    //TODO LO QUE ESTE ANTES DE LA INICIACION DE LAS RECURSIVAS VA A FINALIZAR CON LA ULTIMA DE LAS OPERACIONES
    //POR ESO AGREGO AHORA LAS OPERACIONES QUE UTILIZAN COMO DATOS LA ULTIMA RECURSIVIDAD
    //ESTOS SE VAN A IR SOBREESCRIBIENDO HASTA LLEGAR EL ULTIMO DE LOS CICLOS Y CUANDO SE EMPIECEN A ROMPER NO LE VAN A HACER CASO A ESTAS OPERACIONES
    //PORQUE ESTAN ANTES DEL INICIO DE LA RECURSIVIDAD
    ulti=primerf;
    ultj=primerc;
    ultn=matriz[primerf][primerc];
    matrizaux[ulti][ultj]=ultn;
    contceros=0;

    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(matrizaux[i][j]==0){
                contceros++;
            }
        }
    }

    if(contceros<cantceros){//reviso si encontro los 0 que realmente tiene la matriz
        comprobacion=false;//no los tiene, osea que es cerrada
    }else{
        comprobacion=true;//los tiene, es abierta
    }


    if((primerf>=0)and(primerc>=0)and(primerf<dim)and(primerc<dim)){//para que no se vaya al carajo
        if((matriz[primerf][primerc]==0)and(matrizaux[primerf][primerc]!=0)){
            matrizaux[primerf][primerc]=0;
            recursivabro(matriz,dim,primerf+1,primerc,matrizaux,cantceros,ulti,ultj,ultn,contceros,comprobacion);//Derecha
            recursivabro(matriz,dim+1,primerf,primerc,matrizaux,cantceros,ulti,ultj,ultn,contceros,comprobacion);//Abajo
            recursivabro(matriz,dim,primerf-1,primerc,matrizaux,cantceros,ulti,ultj,ultn,contceros,comprobacion);//Izquierda
            recursivabro(matriz,dim-1,primerf,primerc,matrizaux,cantceros,ulti,ultj,ultn,contceros,comprobacion);//Arriba
        }
    }

}


bool MatrizMadre::comprobarmatrizbase(int **& matriz , int dim , int primerf , int primerc ,int **& matrizaux , int cantceros){

    matrizaux = new int*[dim];
    for (int i=0;i<dim;i++) {
        matrizaux[i] = new int[dim];
        for (int j=0;j<dim;j++) {
            matrizaux[i][j]=1;//Relleno con 1's
        }
    }
    int ulti=0;	//ult fila
    int ultj=0;	//ult colum
    int ultn=0;	//ultimo numero
    int contceros=0;
    bool comprobacion=false;
    recursivabro(matriz,dim,primerf,primerc,matrizaux,cantceros,ulti,ultj,ultn,contceros,comprobacion);
    if(comprobacion==true){
        return true;
    }
    else{
        return false;
    }
}

void MatrizMadre::AbrirMatriz(int **&matrizaux, int **&matriz,int dim, int primerf, int primerc, int cantceros){
    int newi=0;
    int newj=0;

    for(int i=0;i<dim;i++){//Recorro ambas matrices (tienen la misma dimencion)
        for(int j=0;j<dim;j++){
            if((matriz[i][j]==0)&&(matrizaux[i][j]!=0)){//Si se da el caso en que se encuentre un 0 que no esta en el mapa que recorrimos
                newi=i;//añado i y j a estas variables que van a guardar el 0 que
                newj=j;//no esta conectado a nuestro mapa original y tendremos que unir
            }
        }
    }

    int cercano=(dim*2);
    int cercanoi=0;//Estas variables van a contener las direcciones de el numero 0 que sea mas cercano al otro 0,
    int cercanoj=0;//osea el que no esta unido a nuestro mapa

    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if((matrizaux[i][j]==0)&&((i-newi)+(j-newj)<cercano)){//mientras menor sea el numero que de esta resta, significa que mas cerca esta del 0 que no forma parte de nuestro mapa
                if(((i-newi)<0)&&((j-newj)<0)){
                    if(((i-newi)*(-1)+(j-newj)*(-1))<cercano){
                        cercanoi=i;
                        cercanoj=j;
                }else if((i-newi)<0){
                    if(((i-newi)*(-1)+(j-newj))<cercano){
                        cercanoi=i;
                        cercanoj=j;
                }else if((j-newj)<0){
                    if(((i-newi)+(j-newj)*(-1))<cercano){
                        cercanoi=i;
                        cercanoj=j;
                }else{
                    cercanoi=i;
                    cercanoj=j;
                }
            }}}}
        }//le entrego el valor a "cercano i y j respectivamente"
    }

    int bombai=cercanoi;//la bomba se va a inicializar desde el 0 conocido mas cercano
    int bombaj=cercanoj;

    bool explocion=false;//este booleano sera positivo cuando finalice la explocion de nuestra bomba rectilinea

    while(explocion==false){
        if(bombai<=newi){
            matrizaux[bombai][bombaj]=0;//voy abriendo la zona uno por uno avanzado primero i y luego j
            bombai++;
        }
        if(bombaj<=newj){
            matrizaux[bombai][bombaj]=0;//haciendo un recorrido diagonal hasta que llegue un momento en el que se vuelva recto
            bombaj++;
        }
        if((bombai==newi)and(bombaj==newj)){//una vez la direccion de la bomba sea igual al del al que lo queria conectar corto.
            explocion=true;
        }
    }
    while (comprobarmatrizbase(matriz, dim, primerf, primerc, matrizaux, cantceros)!=true){
        AbrirMatriz(matrizaux, matriz, dim, primerf, primerc, cantceros);
    }
}//como matriz aux es un puntero , se va a cambiar en el main


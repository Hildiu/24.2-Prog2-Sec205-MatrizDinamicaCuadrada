/*--------------------------------------------------------------------------------
 * Dato de Entrada: tam (int), trabajamos con una matriz dinamica pero cuadrada
 * Dato de Salida: matriz, elMayor, suma de los elementos de la diagonal principal
 *                 suma de elementos ubicados por encima de la diagonal
 ---------------------------------------------------------------------------------*/

#include <iostream>
#include <iomanip>

using namespace  std;

void llenarDatos( int * *pMat, int tam);
void imprimirMatriz(  int * *pMat, int tam);

int main()
{ int tam;
   int * *pMatriz=nullptr;

   srand(time(nullptr));
   do{
       cout << "Tamanio : ";
       cin >> tam;
   }while(tam<4);

   //--- dimensionamos la matriz
   pMatriz = new int*[tam];
   for(int f=0; f<tam; f++)
       pMatriz[f] = new int[tam];
   llenarDatos(pMatriz,tam);
   imprimirMatriz(pMatriz,tam);

    return 0;
}

void llenarDatos( int * *pMat, int tam)
{
    for(int f=0; f<tam; f++)
        for(int c=0; c<tam; c++)
            pMat[f][c] = rand()%100 + 1;
}

void imprimirMatriz(  int * *pMat, int tam)
{
    for(int f=0; f<tam; f++){
        for(int c=0; c<tam; c++)
            cout << setw(4) << pMat[f][c];
        cout << "\n";
    }
}
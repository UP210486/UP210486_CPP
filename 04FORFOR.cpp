// Axel Emir Saucedo Zermeño
// U2 PROGRAMA TABLAS FOR ANIDADO
// 06/10/2022
// Objetivo: Imprir las tablas de multiplicar del 1 al 10 con for anidados.
#include <iostream>
using namespace std;
int main (){
    for (int n = 1; n <=10; n++)
    {   printf("\n");
        for (int i = 1; i <= 10; i++)
        {
            int m = n * i ;
            printf("%d * %d = %d \n",n,i,m);
        }
        
    }
    

}
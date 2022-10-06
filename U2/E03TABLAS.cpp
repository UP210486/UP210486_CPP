// Axel Emir Saucedo Zermeño
// U2 PROGRAMA TABLAS WHILE
// 06/10/2022
// Objetivo: While mientras true.
#include <iostream>
using namespace std;
int main (){
    int n;
    char o ='s';
    while (o=='s')
    { 
        printf("Imprime la tabla del numero \n");
        scanf("%d",&n);
        printf("\n");
        for (int i = 1; i <= 10; i++)
        {
            int m =i*n;
            printf("%d * %d = %d  \n",n,i,m);
        }
        
        printf("¿Quieres resolver otra tabla? (s/n) \n");
        scanf("%s",&o);
    }
    printf("... Programa finalizado \n");    
}
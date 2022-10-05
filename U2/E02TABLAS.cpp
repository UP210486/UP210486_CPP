// Axel Emir Saucedo Zermeño
// U2 PROGRAMA TABLAS
// 04/10/2022
// Objetivo: Imprimr las tablas de multiplicar  con el ciclo for
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int k=0;
    int l=11;
    int m=0;
    int o=10;
    for (int i = 1; i <= 10; i++)
    {
        int r = n * i;

        // cout<< n << "x"<< i<< "=" << r <<endl;
        printf("%d x %d = %d \n", n, i, r);
    }
    printf("\n");
    for (int j = 10; j >= 1; j--)
    {
        int ri = n * j;
        printf("%d x %d = %d \n", n, j, ri);
    }
    printf("\n");
    while (k<10)
    {
        k++;
        int rw = n*k;
        printf("%d x %d = %d \n", n, k, rw);
    }
    printf("\n");
     while (l>1)
    {
        l--;
        int rwi = n*l;
        printf("%d x %d = %d \n", n, l, rwi);
    }
    printf("\n");
    do
    {
        m++;
        int dw = n*m;
        printf("%d x %d = %d \n", n, m, dw);

    } while (m<10);
    printf("\n");
    do
    {
        o--;
        int dwi = n*o;
        printf("%d x %d = %d \n", n, o, dwi);

    } while (o>0);
    
}
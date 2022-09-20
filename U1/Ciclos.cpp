#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int sp = 0;
    int si = 0;
    int st = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sp= sp + i;
        }
        else
        {
            si= si + i;        
        }
        
        st = st + i;
    }
    printf("***************************\n");
    printf("La sumatoria de tofos los %d numeros es igua a %d \n",n, st);
    printf("**********************************************************\n");
    printf("La sumatoria de todos los numeros pares de %d numeros es igua a %d \n",n, sp);
    printf("********************************************************************\n");
    printf("La sumatoria de todos los numeros impares de %d numeros es igua a %d \n",n, si);
    printf("************************************************************************\n");


    return 0;
}
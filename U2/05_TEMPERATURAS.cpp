// Axel Emir Saucedo Zermeño
// U2 PROGRAMA Temperaturas
// 09/10/2022
/*Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta.*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    int c = 0;
    int prom = 0;
    int tmax = -9999;
    int tmin = 9999;

    for (int i = 1; i <= 6; i++)
    {
        printf("Ingresa la temperatura numero %d \n", i);
        scanf("%d", &t);
        c = c + t;
        if (t >= tmax)
        {
            tmax = t;
        }
        if (t <= tmin)
        {
            tmin = t;
        }
    }
    prom = c / 6;
    printf("La temperatura promedio es igual a %d ° \n", prom);
    printf("La temperatura mayor es igual a %d ° \n",tmax);
    printf("La temperatura menor es igual a %d ° \n",tmin);
}
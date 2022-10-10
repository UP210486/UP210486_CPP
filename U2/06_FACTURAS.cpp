// Axel Emir Saucedo Zermeño
// U2 PROGRAMA FACTURAS
// 10/10/2022
/*Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad.*/
#include <iostream>
using namespace std;
int main()
{
    int p;
    int d;
    int t = 0;
    do
    {
        printf("¿Cuantos productos quieres? \n");
        scanf("%d", &p);
        if (p != 0 and p > 0)
        {
            printf("¿Cual es el precio de los productos? \n");
            scanf("%d", &d);
            t = (d * p);
        }
        

    } while (p != 0);
    printf("El precio total de todos los productos es %d \n",t);
}
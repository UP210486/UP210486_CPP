// Axel Emir Saucedo Zermeño
// U2 PROGRAMA SALA DE JUEGOS
// 07/10/2022
/*Escribir un programa para una empresa que tiene salas de juegos para todas las edades y
quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El
programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y
si es mayor de 18 años, $10*/
#include <iostream>
using namespace std;
int main()
{
    {
        int e;
        printf("¿Que edad tienes? \n");
        scanf("%d", &e);
        if (e <= 4)
        {
            printf("Puede pasar gratis \n");
        }
        else if (e <= 18)
        {
            printf("El costo de su entrada son $5 \n");
        }
        else
        {
            printf("El costo de su entrada son $10 \n");
        }
    }
}
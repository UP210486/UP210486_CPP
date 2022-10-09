// Axel Emir Saucedo Zermeño
// U2 PROGRAMA RENDIMIENTO
// 07/10/2022
// Progama que me dice cuanta bonificacion de dinero ganare dependiendo de mi rendimiento y me dice que nilvel de rendimiento tengo
#include <iostream>
int main()
{
    float e;
    int b = 2400;
    int binificacion = 0;
    printf("¿Que nivel de rendimiento tienes? \n");
    scanf("%f", &e);
    if (e == 0.0)
    {
        printf("Tu nivel de rendimiento es inaceptable \n");
        binificacion = b * e;
        printf("La cantidad de dinero que recibiras como bonificacion sera %d \n", binificacion);
    }
    else if (e == 0.4)
    {
        printf("Tu nivel de rendimiento es aceptable \n");
        binificacion = b * e;
        printf("La cantidad de dinero que recibiras como bonificacion sera %d \n", binificacion);
    }
    else if (e >= 0.6)
    {
        printf("Tu nivel de rendimiento es meritorio \n");
        binificacion = b * e;
        printf("La cantidad de dinero que recibiras como bonificacion sera %d \n", binificacion);
    }
    else
    {
        printf("Numero fuera de los rangos \n");
    }
}
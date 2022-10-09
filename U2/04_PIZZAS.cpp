// Axel Emir Saucedo Zermeño
// U2 PROGRAMA SALA DE JUEGOS
// 07/10/2022
/*La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación.
 Ingredientes vegetarianos: Pimiento y tofu.
 Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en
función de su respuesta le muestre un menú con los ingredientes disponibles para que elija.
Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas la
pizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.*/
#include <iostream>
using namespace std;
int main()
{
    int tp;
    printf("¿Que tipo de pizza quieres, vegetariana o no vegetariana?(1 vegetariana, 2 no vegetariana) \n");
    scanf("%d", &tp);
    if (tp == 1)
    {
        int nv;
        printf("¿Con que ingrediente requieres tu pizza?\n");
        printf("1=Pimienta \n2= tofu ");
        scanf("%d", &nv);
        if (nv == 1)
        {
            printf("Tu pizza es una vegetariana de pimienta\n");
            printf("Esta pizza incluy: \n * Salsa de tomate \n * Queso mozzarela \n * Piienta \n");
        }
        else if (nv == 2)
        {
            printf("Tu pizza es una vegetariana de tofu\n");
            printf("Esta pizza incluye * Salsa de tomate \n * Queso mozzarela \n * Tofu \n");
        }
        else
        {
            printf("Tu pizza no tiene ingun ingrediente\n");
        }
    }
    else if (tp == 2)
    {
        int nv;
        printf("¿Con que ingrediente requieres tu pizza?\n");
        printf("1=Peperoni \n2= Jamon \n3= Salmon \n ");
        scanf("%d", &nv);
        if (nv == 1)
        {
            printf("Tu pizza es una pizza no vegetariana de Peperoni \n");
            printf("Esta pizza incluye \n * Salsa de tomate \n * Queso mozzarela \n * Peperoni \n");
        }
        else if (nv == 2)
        {
            printf("Tu pizza es una pizza no vegetariana de Jamon\n");
            printf("Esta pizza incluye * \7 Salsa de tomate \n * Queso mozzarela \n * Jamon \n");
        }
        else if (nv == 3)
        {
            printf("Tu pizza es una pizza no vegetariana de Salmon\n");
            printf("Esta pizza incluye * Salsa de tomate \n * Queso mozzarela \n * Salmon \n");
        }
        else
        {
            printf("Tu pizza unicamente lleva \n *Salsa de tomate \n * Queso mozzarela \n");
        }
    }
    else{
            printf("Tu pizza unicamente lleva \n *Salsa de tomate \n * Queso mozzarela \n");
        }

}
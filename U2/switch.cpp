#include <iostream>
using namespace std;
int main(){
    int n1, n2,s;
    int o=0;
    char res;
    while (res!= 'n'){
        printf("¿Con que dos numeros quieres trabajar?\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
        printf("¿Que quieres hacer con estos numeros? \n 1- Sumar \n 2- Restar \n 3- Multiplicar \n 4- Dividir \n 0- Salir \n ");
        scanf("%d",&s);
        switch (s)
        {
        case 1:
            o=n1+n2;
            printf("La suma de %d + %d es igual a %d \n",n1,n2,o);
            break;
        case 2:
            o= n1 - n2 ;
            printf("La resta de %d - %d es igual a %d \n",n1,n2,o);
            break;
        case 3:
            o= n1 * n2 ;
            printf("La multiplicacion de %d * %d es igual a %d \n",n1,n2,o);
            break;  
        case 4:
            o= n1/n2 ;
            printf("La division de %d/%d es igual a %d \n",n1,n2,o);
            break;  
    
        default: 
            printf ("Espero haberte ayudado \n");
            break;
    }
    printf ("¿Deseas hacer algo mas? \n");
    scanf("%c",&res);
    } 
}

//Axel Emir Saucedo Zermeño
//U2 PROGRAMA RENTAS
//27/09/2022
#include <iostream>
    int main ()
    {
        int r;
        int i =0;
        int ti= 0;
        printf("¿Cuanto pagas de renta al mes? \n");
        scanf("%d", &r);
        if (r<10000)
        {
            i= i+r;
            i=i*0.05;
            ti=r+i;
            printf("Usted paga 5 porciento de impuestos\n");
            printf("La cantidad de impuestos que paga es igual a %d \n",i);
            printf("La cantidad del pago de renta con impuestos que paga es igual a %d \n",ti);
        }
        else if (r<20000 and r>=10000)  
        {
            i= i+r;
            i=i*0.15;
            ti=r+i;
            printf("Usted paga 15 porciento de impuestos\n");
            printf("La cantidad de impuestos que paga es igual a %d \n",i);
            printf("La cantidad del pago de renta con impuestos que paga es igual a %d \n",ti);
        }
        else if (r<35000 and r>=20000)
        {
            i= i+r;
            i=i*0.20;
            ti=r+i;
            printf("Usted paga 20 porciento de impuestos\n");
            printf("La cantidad de impuestos que paga es igual a %d \n",i);
            printf("La cantidad del pago de renta con impuestos que paga es igual a %d \n",ti);
        }
        else if (r<=60000 and r>=35000)
        {
            i= i+r;
            i=i*0.30;
            ti=r+i;
            printf("Usted paga 30 porciento de impuestos\n");
            printf("La cantidad de impuestos que paga es igual a %d \n",i);
            printf("La cantidad del pago de renta con impuestos que paga es igual a %d \n",ti);
        }
        else if (r>60000)
        {
            i= i+r;
            i=i*0.45;
            ti=r+i;
            printf("Usted paga 45 porciento de impuestos\n");
            printf("La cantidad de impuestos que paga es igual a %d \n",i);
            printf("La cantidad del pago de renta con impuestos que paga es igual a %d \n",ti);
        }
        return 0;       
}
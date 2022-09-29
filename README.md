<center>  

# UP210486_CPP
## Axel Emir Saucedo Zermeño 
### Tan solo soy un loco enamorado con ganas de convertirse en el mejor ingeniero.
**PROXIMAMENTE BODORRIO DEL INGE CON LA PRECIOSA**  
*El comienzo de la mejor aventura*
  Pienso triunfar como desarrollador de software.   
</center>  

---  
Mis cosas favoritas son:  
1. Pasar timpo con mi novia
2. Conbeber
3. Programar <center> 
   

![Foto con mi novia](/U1/imagenes/MIBB.jpeg)
</center>
  
  Cosas por las que amo a mi novia:  
  * Esta preciosa
  * Me ama muchisimo 
  * Me hace feliz  

<center>
  <div align="center">
  <img alt="miamor" src='U1/imagenes/miamor.jpeg' width='250' />
  </div>  
  </center>
---  

    
Uno de mis primeros codigos fue:  

```#include <iostream>
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
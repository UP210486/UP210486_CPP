## Programas unidad 3  

  # 01-BISECCION     
    
    ESTE PROGRAMA CONSISTE EN ASIGNARTE UNA CANTIDAD DE IMPUESTOS A PAGAR DEPENDIDENDO DE CUANTO PAGAS DE RENTA AL MES Y TE DA EL PORCENTAJE DE IMPUESTOS A PAGAR.    
     <div align="center">
  <img alt="01_U2" src='imagenes/01_U2.png' width='1050' />
  </div>  


  ``` #include <iostream>
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
```  
---  

## 02-FUNCION GRADOS A RADIANES   


 Progama que me dice cuanta bonificacion de dinero ganare dependiendo de mi rendimiento y me dice que nilvel de rendimiento tengo    

   <img alt="01_U2" src='imagenes/02_U2.png' width='1050' />
  </div>  

  ```#include <iostream>
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
```  
---  

## 03-AÑO BISIESTO
Escribir un programa para una empresa que tiene salas de juegos para todas las edades y
quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El
programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y
si es mayor de 18 años, $10     
<img alt="03_U2" src='imagenes/03_U2.png' width='1050' />
  </div>  
  
```#include <iostream>
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
```  
---  

  
## 04-COSENO    
La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación.
 Ingredientes vegetarianos: Pimiento y tofu.
 Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en
función de su respuesta le muestre un menú con los ingredientes disponibles para que elija.
Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas la
pizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.  

<img alt="04_U2" src='imagenes/04_U2.png' width='1050' />
  </div>   

```#include <iostream>
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
```  
   ---  

## 05 DESVIACION ESTANDAR POBLACIONAL      
Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas baja y la mas alta   
<img alt="05_U2" src='imagenes/05_U2.png' width='1050' />
  </div>    

  
  ```#include <iostream>
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
```  
---  

  
  ## 06 DESGLOSE DE MONEDA      
Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad.  
<img alt="06_U2" src='imagenes/06_U2.png' width='1050' />
  </div>    

  
  ```#include <iostream>
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
```  
---  
  
  ## 07 NUMEROS DECIMALES A ROMANOS      
Realice un programa que realice la conversión de binario a decimal, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un
conjunto de caracteres.  
<img alt="07_U2" src='imagenes/07_U2.png' width='1050' />
  </div>    

  
  ```#include <iostream>
using namespace std;
#include <stdlib.h>
int main(){
    int d,b[999];
    int i=0;
    printf("Ingresa tu numero en decimal \n");
    scanf("%d", &d);

    while (d!=0){
        b[i] = d % 2;
        d = d / 2;
        i++;
    }
    i--;
    printf("Tu numero decimal en binario es igual a: \n"  );
    while(i>=0){
        printf("%d",b[i]);
        i--;
    }

    return 0;
}
```  
## 08 ORDENAR VECTOR    
Realice un programa que realice la conversión de binario a decimal, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un
conjunto de caracteres.  
<img alt="07_U2" src='imagenes/07_U2.png' width='1050' />
  </div>    

  
  ```#include <iostream>
using namespace std;
#include <stdlib.h>
int main(){
    int d,b[999];
    int i=0;
    printf("Ingresa tu numero en decimal \n");
    scanf("%d", &d);

    while (d!=0){
        b[i] = d % 2;
        d = d / 2;
        i++;
    }
    i--;
    printf("Tu numero decimal en binario es igual a: \n"  );
    while(i>=0){
        printf("%d",b[i]);
        i--;
    }

    return 0;
}
```  
## Programas unidad 1  

  # 01-hola mundo    
  ESTE PROGRAMA CONSISTE EN LA IMPRESION DE LA FRASE "HOLA MUNDO".    
  <div align="center">
  <img alt="01_U1" src='imagenes/01_U1.png' width='1050' />
  </div>  


  ``` #include <iostream>

int main()
{

    std::cout << "HELLO TO MY PERTY WORLD MY FRIENDS\n";

    return 0;
}  
````  
---    
# 02-Par o impar    
<div align="center">
  <img alt="01_U1" src='imagenes/01_U1.png' width='1050' />
  </div>  



  ESTE PROGRAMA CONSISTE EN LA IMPRESION DE LA FRASE "PAR O IMPAR"  


  ```  #include <iostream>
    using namespace std;
int main()
{
    cout<<"Par o Impar"<<endl<<"\n";
    return 0;
}    
```  
---  

# 03-Tipos de datos  
ESTE PROGRAMA CONSISTE EN LA IMPRESION Y LA EXPLICACION DE COMO IMPRIMIR CADA TIPO DE DATOS EN C++   
<div align="center">
  <img alt="03_U1" src='imagenes/03_U1.png' width='1050' />
  </div>    
  
```include <iostream>
#include <stdio.h>
#define PI 3.1416
float const pi = 3.1415;

using namespace std;  

int main()
{
    int unsigned entero = 1999199819;
    float flotante = 2.56543e5;
    double grande = 2.565465654654;
    char caracter ='@';
    
    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << " bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof(caracter)<< " byte" << endl;
    cout << "El valor de PI es : " << PI<< endl;
    cout << "El valor de pi es : " << pi<< endl;


    return 0;
}  
```  
---  
  
# 04-Ciclos    
ESTE PROGRAMA CONSISTE EN LA IMPRESION DE CICLOS CON IFS PARA LOGRAR LA SUMATORIA DE TODOS LOS NUMEROS ENTRE EL U 1 Y EL 10 Y A LA VEZ TAMBIEN LOS IMPARES Y LOS PARES ENTRE EL MISMO RANGO DE NUMEROS.    
<div align="center">
  <img alt="04_U1" src='imagenes/04_U1.png' width='1050' />
  </div>

```#include <iostream>
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
```  
   ---  

# 05-Edades      
ESTE PROGRAMA CONSISTE EN DADA UNA EDAD ASIGNARTE UNA CATEGORIA O RANGO E IMPRIMIRLO, TODO REALIZADO A BASE DE COMANDOS IF.    
<div align="center">
  <img alt="05_U1" src='imagenes/05_U1.png' width='1050' />
  </div>


  
  ```#include <iostream>
int main(){
    int e;
    printf("Dame tu edad \n");
    scanf ("%d",&e);
    if (e >=1 and e<=150)
    {
        if (e<=30)
        {
            printf("primera edad \n");
        }
        else if (e<=60){
            printf("segunda edad \n");
        }
        else if (e<=90){
            printf("tecera edad \n");
        }
        else{
            printf("tiempo extra \n");
        }
    } 
    else{
         printf("fuera del rango de edades \n");
    }

    return 0;
}  
```

hola mundo  
  ``` #include <iostream>

int main()
{

    std::cout << "HELLO TO MY PERTY WORLD MY FRIENDS\n";

    return 0;
}  
````
Par o impar  

  ```#include <iostream>
    using namespace std;
int main()
{
    cout<<"Par o Impar"<<endl<<"\n";
    return 0;
}    
```
Tipos de datos    
  
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
  
Ciclos  
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
   
Edades    
  
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

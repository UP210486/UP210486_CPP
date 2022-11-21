//Axel Emir Saucedo Zermeño
//U2 PROGRAMA FACTORIAL
//11/10/2022
#include <iostream> 
    int main(){
        int n;
        int F=1;
        printf("¿De que numero deseas saber el factorial? \n");
        scanf("%d",&n);
        do
        {
            F=F*n;
            n=n-1; 
        } while (n!=0);
        printf("El factorial del numero  es igual a : %d \n",F);
        
    }
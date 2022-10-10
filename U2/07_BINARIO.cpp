// Axel Emir Saucedo Zermeño
// U2 PROGRAMA BINARIO A DECIMAL
// 10/10/2022
/*Realice un programa que realice la conversión de binario a decimal, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un
conjunto de caracteres.*/
#include <iostream>
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

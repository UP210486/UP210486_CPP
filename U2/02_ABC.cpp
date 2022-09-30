// Axel Emir Saucedo Zermeño
// U2 PROGRAMA RENTAS
// 28/09/2022
// Objetivo: Imprimr el abecedario
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char letra = 65;
    for (int i = 0; i < 26; i++)
    {
        printf("%c \t", letra);

        letra = letra + 1;
    }
    printf("\n");
    printf("\n");
    char letramin = 'a';
    for (int j = 0; j < 26; j++)
    {
        printf("%c \t", letramin);

        letramin = letramin + 1;
    }
    printf("\n");
    printf("\n");
    char letrant = 'Z';
    for (int j = 0; j < 26; j++)
    {
        printf("%c \t", letrant);

        letrant = letrant - 1;
    }
    printf("\n");
    printf("\n");
    int n = 1;
    for (int j = 0; j < 10; j++)
    {
        printf("%d \t", n);

        n = n + 1;
    }
    printf("\n");
    printf("\n");
    int na = 10;
    for (int j = 0; j < 10; j++)
    {
        printf("%d \t", na);

        na = na - 1;
    }

    return 0;
}
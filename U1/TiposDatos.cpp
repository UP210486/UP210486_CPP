/* Unidad 1. Tipos de datos
   Autor: Axel Emir Saucedo Zermeño
   Fecha: 15/09/2022
   Descripción: Muestra los diferentes tipos de datos en c++
*/
#include <iostream>
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
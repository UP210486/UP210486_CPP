#include <iostream>
#include <math.h>
using namespace std;

double half(double x[], int n)
{
    double half = 0;
    for (int i = 0; i < n; i++)
    {
        half = half + x[i];
    }
    half = half / n;
    return half;
}

double deviation(double x[], int n)
{
    double h = half(x, n);
    double dev = 0;
    for (int i = 0; i < n; i++)
    {
        dev = dev + pow(x[i] - h, 2);
    }
    dev = sqrt(dev / n);
    return dev;
}

int main()
{
    double numeros[] = {600, 470, 170, 430, 300};
    int n;
    n = sizeof(numeros) / 8;
    cout << "Half: " << half(numeros, n) << endl;
    cout << "Standar deviation: " << deviation(numeros, n) << endl;
    return 0;
}
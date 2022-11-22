// Autor: Axel Emir Saucedo Zermeño
#include <iostream>
#include <cmath>
using namespace std;

double FuncionEcuacion1(double x)
{
    return (pow(x, 2) - 8 * x + 15);
}

int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xm, y1, y2;

    double Es = 0.00001;
    double Er = abs(x2 - x1);

    int i = 1;
    while (Er > Es)
    {
        xm = (x1 + x2) / 2;
        y1 = FuncionEcuacion1(x1);
        y2 = FuncionEcuacion1(xm);
        if (y1 * y2 < 0)
        {
            x2 = xm;
        }
        else
        {
            x1 = xm;
        }
        Er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << " raiz = " << xm << endl;
    cout << "... Hecho"<< endl;
    return 0;
}
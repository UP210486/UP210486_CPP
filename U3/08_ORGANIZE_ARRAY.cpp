#include <iostream>
using namespace std;

void ordenar(int x[], int v)
{
    int m, s, c;
    do
    {
        c = 0;
        for (int i = 0; i < v; i++)
        {
            s = i + 1;
            if (x[i] > x[s])
            {
                m = x[s];
                x[s] = x[i];
                x[i] = m;
                c++;
            }
        }

    } while (c > 0);
}

int main()
{
    int c[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(c) / 4;
    ordenar(c, n);
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}
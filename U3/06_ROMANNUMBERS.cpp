#include <iostream>
using namespace std;

int main()
{
    int n = 2022;
    int v;
    int roman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string RN[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string number = "";
    int i = 0;
    while (n > 0)
    {
        if (n >= roman[i])
        {
            v = n / roman[i];
            n = n % roman[i];
            for (int j = 0; j < v; j++)
            {
                number = number + RN[i];
            }
        }
        i++;
    }
    cout << number << endl;
    return 0;
}
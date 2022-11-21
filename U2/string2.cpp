#include <iostream>
using namespace std;
int main (){
    int i, c;
    char letra='s';
    char t1[50]="Hola Amigo Mio";
    char t2[]={'A','D','I','O','S'};
    i=0;
    while (t2[i]!='\0')
    {
        t2[i]= tolower(t2[i]);
        cout<<t2[i]<< "\t";
        i++;
    }
    cout << endl << endl;
    i=0;
    c=0;
    
}

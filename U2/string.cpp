#include <iostream>
using namespace std;
int main(){
    string cadena= "universidad";
    int li,lv, longitud = cadena.length();
    for (int i = 0; i < longitud; i++)
    {
        /* code */
        cout<< cadena[i] << "";
        if (cadena[i]=='i')
    {
        li++;
        if (cadena[i]=='a')
        {
            lv++;
        }
        
    }
    

    }
    cout<< ". . . READY" << endl;
    cout<< "La palabra "<<  cadena  <<" tiene "<<  li << " letras i"<<endl;
     cout<< "La palabra "<<  cadena  <<" tiene "<<  lv << " letras vocales"<<endl;
    
    

}

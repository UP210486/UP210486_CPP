#include<iostream>
using namespace std;
int main(){
    int money =3699, i=0;
    int change[10]={1000,500,200,100,50,20,10,5,2,1};
    while (money>0)
    {
        if (money>=change[i])
        {
            cout<<money/change[i]<< " bills of  " <<change[i]<<endl;
            money=money%change[i];
        }
        i++;
    }
    return 0;
}

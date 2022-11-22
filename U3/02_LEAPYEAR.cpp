#include <iostream>
using namespace std;

bool Leap(int year){
    bool r;
    r = year%400==0 || year%4==0 && year%100!=0;
    return r;
}

int main(){
int year;
cout<<"Give me a year: " << endl;
cin>>year;
if(Leap(year)){
    cout<<year<<" is a leap year";
} else{
    cout<<year<<" isnt a leap year";
}
return 0;
}
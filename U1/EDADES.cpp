#include <iostream>
int main(){
    int e;
    printf("Dame tu edad \n");
    scanf ("%d",&e);
    if (e >=1 and e<=150)
    {
        if (e<=30)
        {
            printf("primera edad \n");
        }
        else if (e<=60){
            printf("segunda edad \n");
        }
        else if (e<=90){
            printf("tecera edad \n");
        }
        else{
            printf("tiempo extra \n");
        }
    } 
    else{
         printf("fuera del rango de edades \n");
    }


}
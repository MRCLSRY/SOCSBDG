#include<stdio.h>

int main(){
    int a, b;
    scanf("%d",&a);
    b = a%2;
    if (b==1)
    {
        printf("ODD\n");
    }
    else if (b==0)
    {
        printf("EVEN\n");
    }
    


    return 0;
}
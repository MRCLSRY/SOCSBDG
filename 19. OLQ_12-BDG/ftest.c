#include<stdio.h>

int main(){
    int a,b,c;
    int total=0;
    for (int i = 1; i <=605; i++)
    {
        total=total+i*i;
    }
    printf("%d", total);

    return 0;
}
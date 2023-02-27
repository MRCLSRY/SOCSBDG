#include<stdio.h>

int main(){
    long long a,b,c,i ;
    c = 0;
    scanf("%ld %ld", &a, &b);
    for (i = a; i <= b; i++)
    {
        c = c+i;
    }
    printf("%ld\n", c);
    

    return 0;
}
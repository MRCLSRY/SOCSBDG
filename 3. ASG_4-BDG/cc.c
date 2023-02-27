#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    int i=3;

    for (i; i > 0; i--)
    {
    scanf("%f %f %f %f", &a,&b,&c,&d);
    printf("%.2f\n",(a/1)*2 + (b/2)*4 + (c/3)*6 + (d/4)*4);
    }
    

    return 0;
}
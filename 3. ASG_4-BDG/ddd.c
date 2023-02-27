#include<stdio.h>

int main(){
    long long a,b,c,d,x[3];
    int i;

    for(i=0;i<3;i++){
    scanf("(%ld+%ld)x(%ld-%ld)", &a,  &b, &c, &d );
    getchar();
    x[i] = (a+b)*(c-d);
    }
    
    printf("%ld %ld %ld\n",x[0], x[1], x[2]);
    
    return 0;
}

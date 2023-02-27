#include<stdio.h>

int main(){
    long long a=0,b=0,i=0,j=0,x=0,y=0,z=0;
    
    scanf("%ld",&x);
    long long input[x];
    
    for (i = 0; i<x; i++){
        scanf ("%ld", &input[i]);
    }

    scanf("%ld", &y);

    for (i = 1; i<=y; i++){
        scanf ("%ld %ld", &a, &b);
        input[a-1] = b;
        printf ("Case #%ld: ", i);

    for (z = 0; z<x; z++){
            if(z==(x-1)){
            printf ("%ld\n",input[z]);
            }
            else{
            printf ("%ld ",input[z]);
            }
        }
    }

    return 0;
}

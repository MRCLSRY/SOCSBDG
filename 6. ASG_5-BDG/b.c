#include<stdio.h>

int main(){
    long long input,a,b=0,i,j,k;
    
    scanf("%lld",&input);
    long long z[input];

    for (i = 1; i <= input; i++)
    {
        scanf("%lld",&a);
        long long x[a];

        for (j = 0; j < a; j++)
        {
           scanf("%lld", &x[j]);
           b = b + x[j];
        }
        
        printf ("Case #%lld: ",i);
        printf ("%lld\n",b);
        b = 0;
    }
    




    return 0;
}

#include<stdio.h>

int main(){
    long long a,b,c,d,e,f,i,j;

    scanf("%lld %lld", &a, &b);
    long long x[a][b];

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%lld", &x[i][j]);
        }
    }

    scanf("%lld", &c);
    for (i = 0; i < c; i++)
    {
        scanf("%lld %lld %lld",&d,&e,&f);
        x[d-1][e-1]=f;
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if(j==b-1){
            printf("%lld\n", x[i][j]);
            }
            else
            {
            printf("%lld ", x[i][j]);
            }
            
        }
    }
    
    return 0;
}
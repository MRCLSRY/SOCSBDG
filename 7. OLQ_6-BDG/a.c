#include<stdio.h>

int main(){
    long long input, banyak,i,j,k,total;
    scanf("%lld", &input);
    
    for (i = 1; i <= input; i++)
    {
        scanf("%lld", &banyak);
        long long z[2][banyak];


    for (j = 0; j < 2; j++)
    {
        for (k = 0; k < banyak; k++)
        {
            scanf("%lld", &z[j][k]);//baris kolom
        }
    }
    
    long long zz[banyak];
    
        for (k = 0; k < banyak; k++)
        {
            total=z[0][k]-z[1][k];
            zz[k]=total;
            total=0;
        }

        printf("Case #%lld: ",i);
        for (k = 1; k <= banyak; k++)
        {
        if(k<banyak){
        printf("%lld ", zz[k-1]);
        }
        else
        {
        printf("%lld\n", zz[k-1]);
        }
        }
    }
    




    return 0;
}
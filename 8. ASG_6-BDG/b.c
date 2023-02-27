#include<stdio.h>

int main(){
    long long tc,X,i,b,k,l,sum;

    scanf("%lld", &tc);
    for (i = 0; i < tc; i++)
    {
        scanf("%lld", &X);
        long long a[X][X];
        long long jmlh[X];

        for (b = 0; b < X; b++){
            for (k = 0; k < X; k++){
                scanf("%lld", &a[b][k]);
                }
        }

            for (b = 0; b < X; b++){
                long long sum=0;
                    for (k = 0; k < X; k++){
                    sum += a[k][b];
                    }
                jmlh[b]=sum;
            }

        printf("Case #%lld: ",i+1);
            for (l = 0; l < k; l++){

            if(l<k-1){
                printf("%lld ", jmlh[l]);}

            else{
                printf("%lld\n", jmlh[l]);}
        }
    }

    return 0;
}
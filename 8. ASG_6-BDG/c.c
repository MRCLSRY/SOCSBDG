#include<stdio.h>

int main(){
    long long tc, angka, i,k;

    scanf("%lld", &tc);

    for (i = 0; i < tc; i++){
        long long sum=0;

        scanf("%lld", &angka);
        long long arr[2][angka];//k=kolom

        for (k = 0; k < angka; k++){
            scanf("%lld", &arr[0][k]);
            }

        for (k = 0; k < angka; k++){
            scanf("%lld", &arr[1][k]);
            }

            for (k = 0; k < angka; k++){
                if(arr[0][k]<arr[1][k]){
                sum++;
                }
            }

            printf("Case #%lld: %lld\n", i+1, sum);  
        }               

return 0;
}
#include<stdio.h>

int main(){
    long long banyak,kotak,i,j,k,l,zz,total=0;
    long long zzz=1;
    scanf("%lld", &banyak);
    for (i = 0; i < banyak; i++)
    {
        scanf("%lld", &kotak);
        long long a[kotak][kotak];
        
        for (j = 0; j < kotak; j++)
        {
            for (k = 0; k < kotak; k++)
            {
                scanf("%lld", &a[j][k]);//[baris][kolom]
            }
        }

        long long zz[kotak];
        zz[j]=0;
            
            for (j = 0; j < kotak; j++)
        {
            for (k = 0; k < kotak; k++)
            {
            total = total + a[k][j];
            }
            zz[j]=total;
            total = 0;
        }

        printf("Case #%lld: ",zzz);
        for (k = 1; k <= kotak; k++)
        {
        if(k<kotak){
        printf("%lld ", zz[k-1]);
        }
        else
        {
        printf("%lld\n", zz[k-1]);
        }
        }
        zzz++;
    }

    return 0;
}
#include<stdio.h>

int main(){
    long long b,c;
    long long a,i,j,ok=0;

    //banyak kasus
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        long long max=-1000001, max1=-1000001;

        scanf("%lld", &b);
        long long x[b];


        for (j = 0; j < b; j++)
        {
            scanf("%lld", &x[j]);
        }

        //nilai max
        for (j = 0; j < b; j++)
        {
            if (x[j]>max){
                max = x[j];
            }
        }       

        //max ke 2
        for (j = 0; j < b; j++)
        {
            if (x[j]<max && x[j]>max1){
                max1 = x[j];
            }
            else if (x[j]==max){
                ok=ok+1;
            }
        }
        if (ok>1)
        {
            max1=max;
        }
        
        printf("Case #%lld: %lld\n",i,max1+max);
        ok = 0;
    }
    
    return 0;
}
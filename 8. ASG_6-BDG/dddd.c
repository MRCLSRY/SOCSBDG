#include<stdio.h>

int main(){
    long long tc,i,j,k,input,maks=0, min=1000000001;
    scanf("%lld", &tc);

    for (i = 0; i < tc; i++)
    {
        scanf("%lld", &input);
        long long arr[input];
        long long arr1[input];
        long long akhir[input];

        for (j = 0; j < input; j++)
        {
            arr[j]=0;
            arr1[j]=0;
            akhir[j]=0;    
        }

        for (j = 0; j < input; j++)
        {
            scanf("%lld", &arr[j]);    
        }

        for (j = 0; j < input; j++)
        {
            for (k = j; k < input; k++)
            {
            if(arr[j]==arr[k+1]){
            arr1[j]++;
            }
            }

        for (j = 0; j < input; j++)
        {
            if(arr1[j]>maks){
                maks=arr1[j]+1;
            }
        }        

        for (j = 0; j < input; j++)
        {
            if(arr1[j]==maks-1){
                akhir[j]=arr[j];
            }
        }
        
        for (j = 0; j < input; j++)
        {
            if(akhir[j]<min && akhir[j]!= 0){
                min=akhir[j];
            }
        }

        printf("Case #%lld: %lld\n%lld\n", i+1, maks, min);

        }        
        
    }
    


    return 0;
}
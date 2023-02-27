    #include<stdio.h>
    
    int main(){
    long long tc,i,j,l,k,n,maks=0, full=1000000001;

    scanf("%lld", &tc);

    for (i = 0; i < tc; i++)
    {
        scanf("%lld",&n);
        long long frekuensi, arr[n];
        
        for (j = 0; j < n; i++)
        {
            scanf("%lld", &arr[j]);
        }


            for (l = 0; l < n; l++)
            {
                frekuensi=1;
                for (k = l+1; k < n; k++)
                {
                    if(arr[l]==arr[k]){
                        frekuensi=frekuensi+1;
                    }
                }

                if(frekuensi>maks){
                    maks=frekuensi;
                }
            }


            for (l = 0; l < n; l++)
            {
                frekuensi=1;
                for (k = l+1; k < n; k++)
                {
                    if(arr[l]==arr[k]){
                        frekuensi=frekuensi+1;
                    }
                }

            if(maks==frekuensi && arr[l]<full){
                full = arr[l];
                }
            }

            printf("Case %lld: %lld\n%lld\n",i+1, maks, full );

        
    }
    
    return 0;
}
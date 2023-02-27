 #include<stdio.h>
 typedef long long lli;
 int main(){
 lli tc;
    scanf("%lld", &tc);

    for (lli i = 1; i <= tc; i++){
        lli n;
        scanf("%lld", &n);
        lli arr[n], arr2[n];
        for (lli j = 0; j < n; j++)
            scanf("%lld" , &arr[j]);

        lli freq[n] = {0};
        for (lli j = 0; j < n; j++){
            for (lli k = j; k < n; k++){
                if (arr[j] == arr[k])
                    freq[j]++;
            }
        }

        lli maks = 0;
        for (lli j = 0; j < n; j++){
            if (freq[j] > maks){}
                maks = freq[j];
        }

        lli min = 1000000001;
        for (lli j = 0; j < n; j++){
            if (freq[j] == maks && arr[j] < min)
                min = arr[j];
        }

        printf("Case #%lld: %lld\n", i, maks);
        printf("%lld\n", min);
            
    }

    return 0;
 }

    #include<stdio.h>
    
    int main(){
    long long tc,i,j,n;


    scanf("%lld", &tc);

    for (i = 1; i <= tc; i++){
        long long max = 0;
        scanf("%lld", &n);
        long long arr[n], arr1[10000000]={0};

        for (j = 0; j < n; j++){
            scanf("%lld", &arr[j]);
            arr1[arr[j]]++;
        }

        for (j = 0; j < 10000000; j++){
            if (arr1[j] > max)
            max = arr1[j];
        }

        printf("Case #%lld: %lld\n", i, max);
        for (j  = 0 ; j < 10000000; j++){
            if (arr1[j] == max){
                printf("%lld\n", j);
                break;
            }
      }
    }

return 0;
    }
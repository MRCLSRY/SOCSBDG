    #include<stdio.h>
    
    int main(){
    int tc,i,j,n;
    scanf("%d", &tc);

    for (i = 1; i <= tc; i++){
        scanf("%d", &n);

        int arr1[n], arr2[200001] = {0}, arr3[200001] = {0};
        for (j = 0; j < n; j++){
            scanf("%d", &arr1[j]);
            arr2[arr1[j]]++;
        }

        int max = 0;
        for (j = 0; j < 200001; j++){
            if (arr2[j] > max)
            max = arr2[j];
        }

        printf("Case #%d: %d\n", i, max);
        int indeks = 0;
        for (int j  = 0 ; j < 200001; j++){
            if (arr2[j] == max){
                arr3[indeks] = j;
                indeks++;
            }
        }

        for (int j = 0; j < indeks; j++){
            if (j < indeks-1) printf("%d ", arr3[j]);
            else printf("%d\n", arr3[j]);
        }

    }

return 0;
    }
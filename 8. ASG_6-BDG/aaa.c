#include<stdio.h>

int main(){
    int tc,i,X,kolom,baris,j;
    scanf("%d", &tc);

    for (i = 0; i < tc; i++)
    {
        scanf("%d", &X);
        int arr[X][X];
        int sum[X];

        for (baris = 0; baris < X; baris++)
        {
            for (kolom = 0; kolom < X; kolom++)
            {
                 scanf("%d", &arr[baris][kolom]);
            }
            
        }
        
        for (kolom = 0; kolom < X; kolom++)
        {
            sum[kolom]=0;
            for (baris = 0; baris < X; baris++)
            {
                sum[kolom]+=arr[baris][kolom];
            }
        
        }    
        printf("Case #%d: ", i+1);

        for (j = 0; j < X; j++)
        {
            printf("%d-", sum[j]);
        }
    }

    return 0;
}
#include<stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int besar;
        scanf("%d", &besar);
        int arr[besar][besar];
        for (int j = 0; j < besar; j++)
        {
            for (int k = 0; k < besar; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        }
        int total[besar];
        memset(total, 0, sizeof(total));
        for (int j = 0; j < besar; j++)
        {
            for (int k = 0; k < besar; k++)
            {
                total[j] += arr[k][j];
            }
        }        
        printf("Case #%d: ", i+1);
        for (int j = 0; j < besar; j++)
        {
            if (j==besar-1)
            {
                printf("%d\n", total[j]);
            }
            else
            {
                printf("%d ", total[j]);
            }
            
            
        }
        
    }
    
    return 0;
}
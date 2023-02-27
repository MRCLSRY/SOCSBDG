#include<stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int murid;
        scanf("%d", &murid);
        int arr[murid];

        for (int j = 0; j < murid; j++)
        {
            scanf("%d", &arr[j]);
        }
        int max=0;
        for (int j = 0; j < murid; j++)
        {
            if (max < arr[j]){
                max = arr[j];
            }
        }
        int total =0;
        for (int j = 0; j < murid; j++)
        {
            if (max == arr[j]){
                total ++;
            }
        }
        printf("Case #%d: %d\n",i+1, total);  
    }
    
    return 0;
}
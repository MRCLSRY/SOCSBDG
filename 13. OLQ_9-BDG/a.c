#include<stdio.h>

int main(){
    int arr[31];
    int brp;
    scanf("%d %d", &arr[0], &arr[1]);
    scanf("%d", &brp);
    if(brp == 1){
        printf("%d\n", arr[1]);
    }
    else{
    for (int i = 2; i <= brp; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("%d\n", arr[brp]);
    }
}
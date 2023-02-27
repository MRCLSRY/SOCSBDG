#include<stdio.h>

int main(){
    int input, min=100001;
    long long total=0;
    scanf("%d", &input);
    int arr[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < input; i++)
    {
        total+=arr[i];
        if(arr[i]<min && arr[i]%2 != 0){
        min=arr[i];
        }
    }
    
    if(total%2==0){
        printf("%lld\n", total);
    }

    else{
        printf("%lld\n", total-min);
    }

    return 0;
}
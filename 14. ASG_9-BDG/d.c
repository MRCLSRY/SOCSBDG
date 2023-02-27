#include<stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
    int N,A,B;
    scanf("%d %d %d", &N, &A, &B);
    int arr[21]={0};

    if (N==0)
    {
        printf("Case #%d: %d\n",i+1,A);
    }
    else if(N==1)
    {
        printf("Case #%d: %d\n",i+1,B);        
    }
    else{
        arr[0] = A;
        arr[1] = B;
        for (int i = 2; i <= N; i++)
        {
        arr[i]=arr[i-1]-arr[i-2];
        }
        printf("Case #%d: %d\n",i+1,arr[N]);
    }
    
    }
    return 0;
}
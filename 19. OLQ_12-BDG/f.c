#include<stdio.h>

int sum(int N){
    return (N * (N +1) * (2 * N +1)) / 6 ;
    }

int main(){
    int tc;
    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++)
    {
    int M;
    int low = 1;
    scanf("%d", &M);
    int high = M;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(sum(mid) >= M && sum(mid - 1) < M){
        printf("Case #%d: %d\n",i,mid);
        break ;
        }
        if(sum(mid) < M)
            low = mid + 1 ;
        else if(sum(mid) >= M && sum(mid - 1) >= M)
            high = mid - 1 ;
    }
    
    }
return 0;
}


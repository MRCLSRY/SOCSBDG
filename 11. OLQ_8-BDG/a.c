#include<stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int N,M,O;
        scanf("%d %d %d", &N, &M, &O);
        if (N+M>O && N+O>M && M+O>N)
        {
            printf("Case #%d: Yes\n", i+1);
        }    
        else
        {
            printf("Case #%d: No\n", i+1);
        }
        
    }
    
    return 0;
}
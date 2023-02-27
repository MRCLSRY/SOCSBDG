#include<stdio.h>

int main(){
    long long a=0;
    int i=0, j;
    
    scanf("%lld", &a);
    int b[a];

    for (j = 1; j <= a; j++)
    {
        for (i = 0; i < 2; i++)
        {
        scanf("%d", &b[i]);
        }

        printf("Case #%d: ", j);
        
        if (b[0]>b[1])
        {
            printf("Go-Jo\n");
        }
        else if (b[0]<b[1]) {
            printf("Bi-Pay\n");
        }
    }
    


    return 0;
}
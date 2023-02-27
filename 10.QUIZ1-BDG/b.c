#include<stdio.h>

int main(){
    int tc,banyak,i,j;
    scanf("%d", &tc);

    for (i = 0; i < tc; i++)
    {
        scanf("%d", &banyak);
        printf("Case #%d:\n", i+1);

        for (j = 1; j <= banyak; j++)
        {
            if ((j%3==0 || j%5==0) && j%15!=0)
            {
                printf("%d Jojo\n", j);
            }
            else
            {
                printf("%d Lili\n", j);
            }
            
        }
        
    }
    
    return 0;
}
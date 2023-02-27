#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    char agus[a][b];

    for (int i = 0; i < a; i++)
    {
        scanf("%s", &agus[i]);
        getchar();
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; i++)
        {
            for (int z = 0; z <= b-1-j; z++)
            {
                if (agus[i][j]>agus[i][j+1])
                {
                    char temp;
                    agus[i][j] = temp;
                    agus[i][j] = agus[i][j+1];
                    agus[i][j+1] = temp;
                }
            }
            
        }
        
    }
    
    printf("%s\n", agus[0]);
       printf("%s", agus[1]);
    

    return 0;
}
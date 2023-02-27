#include<stdio.h>
#include <string.h>

int main(){
    char input[1000];
    int a,i,j;
    scanf("%d", &a);
    getchar();

    for (j = 1; j <= a; j++)
    {
        scanf("%s", &input);
        getchar();
    
    printf("Case %d: ",j);
    for (i = 0; i < strlen(input); i++)
    {
        if(i<(strlen(input)-1)){
        printf("%d-", input[i]);
        }
        else
        {
        printf("%d\n", input[i]);   
        }
        
    }
    }   
    return 0;
}
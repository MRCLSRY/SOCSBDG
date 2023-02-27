#include<stdio.h>
#include <string.h>

int main(){
    char input[1000];
    int a,i,j,k,x;
    scanf("%d", &a);

    for (j = 1; j <= a; j++)
    {
        scanf("%s", &input);
        getchar();

    k = strlen(input)-1;
    printf("Case #%d : ",j);
    for (i = k; i >= 0; i--)
    {
      printf("%c", input[i]);
    }
    printf("\n");
    // scanf("%s",&input);
    // printf("Case %d : ",j);
    // printf("%s\n", strrev(input));
    }   
    


    return 0;
}
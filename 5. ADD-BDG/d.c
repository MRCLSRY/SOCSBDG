#include<stdio.h>

int main(){
    int input, i, j;
    scanf("%d", &input);

    for (i = 0; i < input ; i++)
    {
        for (j = 0; j < input; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
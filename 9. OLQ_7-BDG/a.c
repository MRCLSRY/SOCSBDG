#include<stdio.h>

int main(){
    int input;
    char arr[100];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &input);
        scanf("%s", &arr);
        printf("%c%c\n",arr[input-1], arr[0]);
    }
    

    return 0;
}
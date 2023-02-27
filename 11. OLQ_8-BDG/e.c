#include<stdio.h>
#include<string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char string[1001] = {0};
        scanf("%s", &string);
        for (int j = 0; j < strlen(string); j++)
        {
            if (string[j]>='a' && string[j]<='z')
            {
                string[j]-=32;
            }
            else if (string[j]>='A' && string[j]<='Z')
            {
                 string[j]+=32;
            }
        }
        printf("Case #%d: ",i+1);
       int z = strlen(string)-1;
        for (int j = z; j >= 0; j--)
        {
            printf("%c", string[j]);
        }
    printf("\n");
    }
    

    return 0;
}
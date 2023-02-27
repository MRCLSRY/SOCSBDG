#include<stdio.h>
#include <string.h>

int main(){
    int tc;
    char kata[1001];

    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        scanf("%s", &kata);
        printf("Case %d: ",i+1);
        for (int j = strlen(kata)-1; j >= 0; j--)
        {
            if(j!=0){
            printf("%d", kata[j]%2);
            }
            
            else
            printf("%d\n", kata[j]%2);
        }
        
    }
    
}
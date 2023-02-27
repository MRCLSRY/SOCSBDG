#include<stdio.h>
#include<string.h>

int main(){
    int tc,i;
    scanf("%d", &tc);
    for (int j = 0; j < tc; j++)
    {
        int total=0;
        char str[100000];
        scanf("%s", &str);
        int banyak = strlen(str);
        int arr[100000] = {0};
        
        for(i = 0; i < banyak; i++)
        {
        arr[str[i]] = 1;
        }
 
        for(i = 0; i < 100000; i++)
        {
            if (arr[i]>0)
            {
                total++;
            }
        }
        printf("Case #%d: ",j+1);
        if (total%2==0)
        {
            printf("Breakable\n");
        }
        else
        {
            printf("Unbreakable\n");
        }

    }
    
    return 0;
}
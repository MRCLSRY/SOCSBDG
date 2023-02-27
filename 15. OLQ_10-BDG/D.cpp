#include<stdio.h>
#include<string.h>
    struct sor{
     char name[100];
     long long int num;
    };
int main(){
    int g;
    int temp;
    
    scanf("%d",&g);
    struct sor arr[100];
    for (int i = 0; i < g; i++)
    {
        scanf("%s %lld",&arr[i].name,&arr[i].num);
    }
    for (int i = 1; i < g; i++) {
      for (int j = 0; j < g - i; j++) {
         if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
            struct sor tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
         }
      }

    }
  
    for (int i = 0; i < g-1; i++)
    {
        for (int j = 0; j < g-i-1; j++)
        {
            if (arr[j].num>arr[j+1].num)
            {
                struct sor temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }  
    for (int x = 0; x < g; x++)
    {
        printf("%s\n",arr[x].name);
    }
return 0;    
}

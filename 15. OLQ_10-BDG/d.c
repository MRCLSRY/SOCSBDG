#include<stdio.h>
#include<string.h>

struct matkul{
     char tugas[100];
     long long int dl;
};

int main(){
    int tc;
    int temp;
    
    scanf("%d",&tc);
    struct matkul arr[100];
    for (int i = 0; i < tc; i++)
    {
        scanf("%s %lld",&arr[i].tugas,&arr[i].dl);
    }
    for (int i = 1; i < tc; i++) {
      for (int j = 0; j < tc - i; j++) {
         if (strcmp(arr[j].tugas, arr[j + 1].tugas) > 0) {
            struct matkul tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
         }
      }

    }
  
    for (int i = 0; i < tc-1; i++)
    {
        for (int j = 0; j < tc-i-1; j++)
        {
            if (arr[j].dl>arr[j+1].dl)
            {
                struct matkul temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }  
    for (int x = 0; x < tc; x++)
    {
        printf("%s\n",arr[x].tugas);
    }
return 0;    
}

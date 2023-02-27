#include<stdio.h>
#include<string.h>
    struct lis{
     char name[100];
     int angka;
    };
int main(){
    int t;
    scanf("%d",&t);
    for (int k = 0; k < t; k++){

    int a;
    int temp;
    
    scanf("%d",&a);
    struct lis arr[a];
    for (int i = 0; i < a; i++){
        scanf("%[^#]#%d",&arr[i].name,&arr[i].angka);
    }

    for (int i = 1; i < a; i++){
      for (int j = 0; j < a - i; j++){
         if (strcmp(arr[j].name, arr[j + 1].name) > 0){
            struct lis tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
         }
      }

    }

    for (int i = 0; i < a-1; i++){
        for (int j = 0; j < a-i-1; j++){
            if (arr[j].angka<arr[j+1].angka){
                struct lis temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("Case #%d:",k+1);   
    for (int m = 0; m < a; m++){
        printf("%s - %d",arr[m].name,arr[m].angka);
    }
    printf("\n");
    }
return 0;    
}


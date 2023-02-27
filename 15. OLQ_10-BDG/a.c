#include<stdio.h>
#include<string.h>
    
struct urutan{
    char nama[100];
    int angka;
    };

int main(){
    int tc;
    scanf("%d",&tc);
    for (int k = 0; k < tc; k++){

    int a;
    int temp;
    
    scanf("%d",&a);
    struct urutan arr[a];
    for (int i = 0; i < a; i++){
        scanf("%[^#]#%d",&arr[i].nama,&arr[i].angka);
    }

    for (int i = 1; i < a; i++){
      for (int j = 0; j < a - i; j++){
         if (strcmp(arr[j].nama, arr[j + 1].nama) > 0){
            struct urutan tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
         }
      }

    }

    for (int i = 0; i < a-1; i++){
        for (int j = 0; j < a-i-1; j++){
            if (arr[j].angka<arr[j+1].angka){
                struct urutan temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("Case #%d:",k+1);   
    for (int m = 0; m < a; m++){
        printf("%s - %d",arr[m].nama,arr[m].angka);
    }
    printf("\n");
    }
return 0;    
}


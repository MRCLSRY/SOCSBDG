#include<stdio.h>
#include<string.h>
struct sort{
    int num;
    char name[100];
};
int main(){
    int b;
    int tem;
    FILE *ptr;
    ptr = fopen("testdata.in","r");
    
    fscanf(ptr,"%d",&b);
    struct sort arr[b];
    for (int i = 0; i < b; i++)
    {
        fscanf(ptr,"%d#%[^\n]",&arr[i].num,&arr[i].name);
    }

    for (int i = 0; i < b; i++) {
      for (int j = 0; j < b - i - 1 ; j++) {
         if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
            struct sort tem = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tem;
         }
      }

    }
    for (int g = 0; g < b; g++)
    {
        printf("%d %s\n",arr[g].num,arr[g].name);
    }
return 0;    
}

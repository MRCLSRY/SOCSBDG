#include<stdio.h>
#include<string.h>
    struct sor{
     char name[1001];
     double num;
     char celci[500];
    };
int main(){
    FILE *ptr;
    ptr = fopen("testdata.in","r");
    struct sor ar[500];
    double temp;
    int a = 0;

    while (fscanf(ptr,"%[^#]#%lf#%c\n",&ar[a].name,&ar[a].num,&ar[a].celci)!=EOF)
    {
         if (strcmp(ar[a].celci,"F")==0)
        {
            ar[a].num = (ar[a].num-32)*5/9;
        }  
        a++;
    }
    
    for (int i = 1; i < a; i++) {
      for (int j = 0; j < a - i; j++) {
         if (strcmp(ar[j].name, ar[j + 1].name) > 0) {
            struct sor temp = ar[j];
            ar[j] = ar[j + 1];
            ar[j + 1] = temp;
         }
      }

    }   
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (ar[j].num>ar[j+1].num)
            {
                struct sor tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
            
        }  
    }   
    for (int k = 0; k < a; k++)
    {
        if (strcmp(ar[k].celci,"F")==0)
        {
            ar[k].num = (ar[k].num*9/5)+32;
            printf("%s is %.2lf%s\n",ar[k].name,ar[k].num,ar[k].celci);
        }
        else printf("%s is %.2lf%s\n",ar[k].name,ar[k].num,ar[k].celci);
    }
    fclose(ptr);
return 0;    
}

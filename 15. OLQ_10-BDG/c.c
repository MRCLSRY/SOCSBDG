#include<stdio.h>
#include<string.h>

struct save{
    char city[1001];
    double angka;
    char temperature[500];
};

int main(){
    FILE *ptr;
    ptr = fopen("testdata.in","r");
    struct save ar[500];
    double temp;
    int a = 0;

    while (fscanf(ptr,"%[^#]#%lf#%c\n",&ar[a].city,&ar[a].angka,&ar[a].temperature)!=EOF)
    {
        if (strcmp(ar[a].temperature,"F")==0)
        {
            ar[a].angka = (ar[a].angka-32)*5/9;
        }  
        a++;
    }
    
    for (int i = 1; i < a; i++) {
      for (int j = 0; j < a - i; j++) {
         if (strcmp(ar[j].city, ar[j + 1].city) > 0) {
            struct save temp = ar[j];
            ar[j] = ar[j + 1];
            ar[j + 1] = temp;
         }
      }

    }   
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (ar[j].angka>ar[j+1].angka)
            {
                struct save tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
            
        }  
    }

    for (int k = 0; k < a; k++)
    {
        if (strcmp(ar[k].temperature,"F")==0)
        {
            ar[k].angka = (ar[k].angka*9/5)+32;
            printf("%s is %.2lf%s\n",ar[k].city,ar[k].angka,ar[k].temperature);
        }
        else printf("%s is %.2lf%s\n",ar[k].city,ar[k].angka,ar[k].temperature);
    }
    fclose(ptr);

return 0;    
}

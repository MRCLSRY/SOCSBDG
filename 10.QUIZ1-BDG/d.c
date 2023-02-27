#include<stdio.h>

int main(){
    int i,j,tc,angka;
    scanf("%d", &tc);

    for (i = 0; i < tc; i++)
    {
        scanf("%d", &angka);
        int total[angka];

        for (j = 0; j < angka; j++)
        {
            scanf("%d", &total[j]);
        }

        int p=0,q=0;
        scanf("%d %d", &p, &q);
        p-=1;
        q-=1;
        printf("Case #%d : ", i+1);
        if(total[p]>total[q]){
            printf("Bibi\n");
        }
        else if(total[p]<total[q]){
            printf("Lili\n");
        }
        else{
            printf("Draw\n");
        }
        
    }
    




    return 0;
}
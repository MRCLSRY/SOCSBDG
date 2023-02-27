#include <stdio.h>

void plus(int temp, int jumlah, int data[], int angka) {
    int d = data[temp];
    if(temp*2+1 < angka)
    {
        plus(temp*2+1, jumlah + d, data, angka);
            if(temp*2+2 < angka)
            {
                plus(temp*2+2, jumlah + d, data, angka);
            }
    }
    else
        printf("%d\n",jumlah + d );
    }

int main(){
    int angka,tc, caseId = 1;
    scanf("%d", &tc);

    while(caseId <= tc)
    {
        scanf("%d", &angka);
        int data[angka];

        for(int i=0;i<angka; i++) 
        {
            scanf("%d", &data[i]);
        }

        printf("Case #%d:\n", caseId);
        plus(0, 0, data, angka);
        caseId++;
    }
return 0;
}
#include<stdio.h>

int main(){
    long long input1=0, input2=0;
    long long total1=0, total2=0;
    long long i=0,j=0;

    scanf("%ld",&input1);

    for (i = 0; i < input1; i++)
    {
        scanf("%ld", &input2);
        long long isi[input2];

        for (i = 0; i < input2; i++)
        {
            scanf("%ld",&isi[i]);
            total1 += isi[i];
        }

        for (i = 0; i < input2; i++)
        {
            if (total1 < isi[i])
            {
             total2++; 
            }
            
        }
        printf("Case #%ld: %ld\n",j+1, total1);
        printf("%ld\n", total2);
        
        total1 = 0;
    	total2 = 0;
    }
    







    return 0;
}

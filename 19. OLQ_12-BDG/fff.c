#include<stdio.h>
    unsigned long long int  low = 1;
    unsigned long long int  jumlah = 0;
    unsigned long long int  total=0;

unsigned long long int sum(unsigned long long int N){
    if (total<N)
        {
            total = total + low*low;
            jumlah++;
            low++;
            return sum(N);
        }
        else{
            printf(" %llu\n", jumlah);
            low = 1;
            jumlah = 0;
            total = 0;
        }
}



int main(){
    int tc;
    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++)
    {
    unsigned long long int  M;
    scanf("%llu", &M);
    printf("Case #%d:",i);
    sum(M);
    }

return 0;
}

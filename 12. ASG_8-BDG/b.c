#include<stdio.h>

int main(){
    int banyak;
    long long angka,total = 0;
    
    scanf("%d", &banyak);
    for (int i = 0; i < banyak; i++)
    {
        scanf("%lld", &angka);
        if (angka>=0){
            total+=angka;
        }
    }
    printf("%lld\n", total);
    
    return 0;
}
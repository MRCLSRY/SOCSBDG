#include<stdio.h>

int main(){
    int awal, banyak, i;
    scanf("%d %d", &awal, &banyak);
    for (i = 0 ; i <= banyak ; i++){
        printf("%d\n", &awal);
        awal++;
    }
    
    return 0;
}
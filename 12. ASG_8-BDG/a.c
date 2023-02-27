#include<stdio.h>

int main(){
    int harga,cashback,maks,tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
    scanf("%d %d %d", &harga, &cashback, &maks);
    int akhir = (harga/100)*cashback;
    if (akhir<=maks)
    {
        printf("Case #%d: %d\n",i+1, akhir);
    }
    else{
        printf("Case #%d: %d\n",i+1, maks);
    }
    }
    
    return 0;
}
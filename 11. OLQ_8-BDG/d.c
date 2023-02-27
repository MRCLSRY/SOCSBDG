#include<stdio.h>
#include<math.h>

int main(){
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int angka;
        scanf("%d", &angka);
        int akar = sqrt(angka);
        int faktor=0;
        for (int j = 1; j <= akar; j++)
        {
            if (angka%j == 0 && j*j != angka)
            {
                faktor+=2;
            }
            else if (j*j == angka)
            {
                faktor++;
            } 
        }
        printf("Case #%d: %d\n",i+1, faktor);
        
    }
    
    return 0;
}
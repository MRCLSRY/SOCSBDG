#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int tc,i,input,akar;
    scanf("%d", &tc);

    for (i = 0; i < tc; i++)
    {
        long long faktor = 0;
        scanf("%d", &input);
        akar=sqrt(input);

        for (int j = 1; j <= akar; j++)
        {
            if(input%j==0){
                if(input==j*j){
                    faktor++;
                }
                else{
                    faktor+=2;
                }
            }
        }
        printf("Case #%d: %lld\n",i+1,faktor);
    }

    return 0;
}
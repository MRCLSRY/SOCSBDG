#include<stdio.h>

int main(){
    long long i, j,k,x,y, input[1000], urutan[1000];

    scanf("%ld",&x);
    
    for (i = 0; i<x; i++){
        scanf ("%ld", &urutan[i]);
    }

    for (i = 0; i<x; i++){
        y=urutan[i];
        scanf ("%ld", &input[y]);
    }
    
    y = 0;

    for (k = 0; k<x; k++){
            if(k==(x-1)){
            printf("%ld\n",input[y]);
            }
            else{
            printf("%ld ",input[y]);
            }
            y++;
        }
        
    return 0;
}

#include<stdio.h>

int main(){
    long long N,angka,a,b,i,j;
    
    scanf("%lld",&N);
    long long input[N];
    
    for (i = 0; i<N; i++){
        scanf ("%lld", &input[i]);
    }

    scanf("%lld", &angka);
        for (i = 0; i<angka; i++){
            scanf ("%lld %lld", &a, &b);
                input[a-1] = b;

    printf ("Case #%lld: ", i+1);

        for (j = 0; j<N; j++){
            if(j < N-1){
                printf("%lld ",input[j]);
                }

            else{
                printf("%lld\n",input[j]);
                }
        }
    }

    return 0;
}

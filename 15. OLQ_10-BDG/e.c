#include<stdio.h>
#include<string.h>

struct gerbong{
    long long int b;
};

int main(){
    int N, temp, tc, waktu;

    scanf("%d",&tc);
    for (int x = 0; x < tc; x++){  
        scanf("%d %d",&N,&waktu);
        struct gerbong arr[N];

        for (int i = 0; i < N; i++){
            scanf("%lld",&arr[i].b);
        }

        int cont = 0;
        for (int i = 0; i < N-1; i++){
            for (int j = 0; j < N-i-1; j++){
                if (arr[j].b>arr[j+1].b){
                    cont++;
                    struct gerbong temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }  
            }   
        }
       printf("Case #%d: %d\n",x+1,cont*waktu);  
    }  
return 0;    
}

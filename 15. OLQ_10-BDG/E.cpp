#include<stdio.h>
#include<string.h>
    struct so{
    long long int b;
    };
int main(){
    int a;
    int temp;
    int tc;
    int waktu;
    scanf("%d",&tc);
    for (int x = 0; x < tc; x++){  
        scanf("%d %d",&a,&waktu);
        struct so arr[a];
        for (int i = 0; i < a; i++){
            scanf("%lld",&arr[i].b);
        }
        int cont = 0;
        for (int i = 0; i < a-1; i++){
            for (int j = 0; j < a-i-1; j++){
                if (arr[j].b>arr[j+1].b){
                    cont++;
                    struct so temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }  
            }   
        }
       printf("Case #%d: %d\n",x+1,cont*waktu);  
    }  
return 0;    
}

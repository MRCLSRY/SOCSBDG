#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int b[1000001];

int main(){
    int tc;
    scanf("%d", &tc);
    
    for(int j = 0; j<tc ; j++){
        int banyak, total = 0; 
        scanf("%d", &banyak);
        int a[banyak];
        memset(b, 0, sizeof(b));

        for(int i = 0; i < banyak; i++){
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        for(int i = 0; i < 1000001; i++){
            if(b[i] > 0){
                total++;
            }
        }
        printf("Case #%d: %d\n", j+1, total);

    }
}

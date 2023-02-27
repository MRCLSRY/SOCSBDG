#include <stdio.h>

int main(){
    int T, N;
    scanf("%d", &T);
    for (int i = 0;i < T;i++){
        scanf("%d", &N);
        int a[N];
        int b[N];
        for (int j = 0;j < N;j++){
            scanf("%d", &a[j]);
        }
        for (int j = 0;j < N;j++){
            scanf("%d", &b[j]);
        }
        int c = 0;
        for (int j = 0;j < N;j++){
            if (b[j] > a[j]){
                c++;
            }
        }
        printf("Case #%d: %d\n", i+1, c);
    }
}
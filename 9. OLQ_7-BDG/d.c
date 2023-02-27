#include<stdio.h>

int main(){
    int N,M,ubah;

    scanf("%d %d", &N, &M);
    char kata[N];

    scanf("%s", &kata);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &ubah);
        if(kata[ubah]>= 'a' && kata[ubah]<='z'){
            kata[ubah]-=32;
        }
        else if(kata[ubah]>='A' && kata[ubah]<='z'){
            kata[ubah]+=32;
        }
    }
    printf("%s\n", kata);
    return 0;
}
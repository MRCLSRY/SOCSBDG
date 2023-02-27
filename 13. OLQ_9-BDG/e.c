#include <stdio.h>

char arena[1002][1002];
int lewat[1002][1002];
int ans = 0;
int a,b;

void poin(int p, int k){
    lewat[p][k]++;
    if(k < b-1){
        if((arena[p][k+1] == '.'|| arena[p][k +1] == '*') && lewat[p][k+1]!=1){
            if(arena[p][k+1] == '*')
                ans++;
            poin(p,k+1);
        }
    }
    if(k != 0){
        if((arena[p][k-1] == '.'|| arena[p][k-1] == '*') && lewat[p][k-1]!=1){
            if(arena[p][k-1] == '*')
                ans++;
            poin(p,k-1);            
        }
    }
    if(p < a-1){
        if((arena[p+1][k] == '.'|| arena[p+1][k] == '*') && lewat[p+1][k]!=1){
            if(arena[p+1][k] == '*')
                ans++;
            poin(p+1,k);
        }
    }
    if(p != 0){
        if((arena[p-1][k] == '.'|| arena[p-1][k] == '*') && lewat[p-1][k]!=1){
            if(arena[p-1][k] == '*')
                ans++;
            poin(p-1,k);
        }
    }
}

void jawab(int *i){
    scanf("%d %d",&a,&b);
    getchar();
    int d,e;
    int j,l;
    for(j = 0; j<a; j++){
        for(l=0; l<b; l++){
            scanf("%c",&arena[j][l]);
            lewat[j][l] = 0;
            if(arena[j][l] =='P'){
                d = j;
                e = l;
            }
        }
        getchar();
    }
    ans = 0;
    poin(d,e);
    printf("Case #%d: %d\n",*i+1,ans);
}

int main() {
    int t,i;
    scanf("%d",&t);

    for(i=0; i < t; i++){
        jawab(&i);
    }
    
    return 0;
}
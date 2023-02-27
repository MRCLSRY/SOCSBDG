#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct a{
    char tittle[1005];
    char artis[1005];
    int watch;
}a;

void display(){
    
}
int main(){
    struct a yt[100];
    struct a c;
    int s = 0;
    FILE *pro = fopen("testdata.in", "r");
    while(!feof(pro)){
        fscanf(pro, "%[^#]#%[^#]#%d\n", yt[s].tittle, yt[s].artis, &yt[s].watch);
        s++;
    }

    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            if(yt[i].watch > yt[j].watch){
                c = yt[i];
                yt[i] = yt[j];
                yt[j] = c;
            }

            if(yt[i].watch == yt[j].watch){
                if(strcmp(yt[i].tittle, yt[j].tittle) < 0){
                    c = yt[i];
                    yt[i] = yt[j];
                    yt[j] = c;
                }
            }
        }
    }
    
    for(int i = 0; i < s; i++){
        printf("%s by %s - %d\n", yt[i].tittle, yt[i].artis, yt[i].watch);
    }
    return 0;
}
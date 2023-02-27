#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct kalimat
{
    char ar[64];
    char arr[64];
}kalimat;

int search(char key[], int t, kalimat kata[]){
    int idx = -1;
    for(int i = 0; i < t; i++){
        if(strcmp(key, kata[i].ar) == 0){
            idx = i;
            return idx;
        }
    }
    return idx;
}

int main(){
    FILE *p;
    p = fopen("testdata.in", "r");
    int t, tc;
    char singkt[128];
    char kata[64][64];
    fscanf(p, "%d\n", &t);
    struct kalimat a[t];
    for(int i = 0; i < t; i++){
        fscanf(p, "%[^#]#%[^\n]\n", &a[i].ar, &a[i].arr);
    }
    fscanf(p, "%d\n", &tc);
    for(int l = 0; l < tc; l++){
        fscanf(p, "%[^\n]\n", singkt);
        int cw = 0;
        int co = 0;
        for(int m = 0; m <= strlen(singkt); m++){
            if(singkt[m] == ' ' || singkt[m] == '\0'){
                kata[cw][co] = '\0';
                cw++;
                co = 0;
            }
            else{
                kata[cw][co] = singkt[m];
                co++;
            }
        }
        printf("Case #%d:\n", l + 1);

        for(int n = 0; n < cw; n++){
            int in = search(kata[n], t, a);
            if(in != -1){
                if(n == 0){
                    printf("%s", a[in].arr);
                }
                else{
                    printf(" %s", a[in].arr);
                }
            }
            else{
                if(n == 0){
                    printf("%s", kata[n]);
                }
                else{
                    printf(" %s", kata[n]);
                }
            }
        }
        printf("\n");
    }
    fclose(p);
    return 0;
}

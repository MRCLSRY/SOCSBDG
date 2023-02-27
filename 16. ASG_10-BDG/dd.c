#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//marcel 2502001164

struct a{
    int b;
    int h;
};

int main(){
    struct a data;
    scanf("%d %d", &data.b, &data.h);
    char ct[255][255];
    char c[255], d;
    for(int i = 0; i < data.b; i++){
        scanf(" %[^\n]", ct[i]);
    }
    for(int i = 0; i < data.b; i++){
        for(int j = 0; j < data.h; j++){
            for(int k = j+1; k < data.h; k++){
                if(ct[i][j] > ct[i][k]){
                    d = ct[i][j];
                    ct[i][j] = ct[i][k];
                    ct[i][k] = d;
                }
            }
        }
    }
    for(int i = 0; i < data.b; i++){
        for(int j = i + 1; j < data.b; j++){
            if(strcmp(ct[i], ct[j]) < 0){
                strcpy(c, ct[i]);
                strcpy(ct[i], ct[j]);
                strcpy(ct[j], c);
            }
        }
    }
    for(int i = 0; i < data.b; i++){
        printf("%s\n", ct[i]);
    }
}
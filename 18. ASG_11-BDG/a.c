#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int N;
char no[1005][1005]; 
char nama2[2][1005];
char no2[2][1005];
char nama[1005][1005];

void sort(){
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(strcmp(no[i], no[j]) > 0){
                strcpy(no2[0], no[i]);
                strcpy(no[i], no[j]);
                strcpy(no[j], no2[0]);
                strcpy(nama2[0], nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], nama2[0]);
            }
        }
    }
}
int main(){
    FILE *pro = fopen("testdata.in","r");
    fscanf(pro, "%d\n", &N);
    for (int i = 0; i < N; i++){
        fscanf(pro, "%s %[^\n]", no[i], nama[i]);
    }
    fclose(pro);
    sort();
    for(int i = 0; i < N; i++){
        printf("%s %s\n", no[i], nama[i]);
    }
    return 0;
}
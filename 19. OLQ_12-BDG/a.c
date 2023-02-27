#include<stdio.h>
#include<string.h>

struct data{
    char nim[11];
    char nama[256];
};

int ubah(struct data arr[], char key[], int t){

    int idx = -1;
    for(int i = 0; i < t; i++){
        if(strcmp(arr[i].nim, key) == 0){
            idx = i;
        }
    }
    return idx;
}

int main(){

    FILE *ptr;
    ptr = fopen("testdata.in", "r");

    int tc;
    int b, idx;
    char key[256];

    fscanf(ptr,"%d\n", &tc);
    
    struct data arr[tc];
    for(int i = 0; i < tc; i++){
        fscanf(ptr, "%s %[^\n]\n", arr[i].nim, arr[i].nama);
    }

    fscanf(ptr, "%d\n", &b);
    for(int i = 0; i < b; i++){
        fscanf(ptr, "%s", &key);

        idx = ubah(arr, key, tc);
        
        if(idx != -1){
            printf("Case #%d: %s\n", i + 1, arr[idx].nama);
        }
        else{
            printf("Case #%d: N/A\n", i + 1);
        }
    }
    return 0;
}
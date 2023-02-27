#include <stdio.h>
#include <string.h>

struct barang{
    char jenis[51];
    int jumlah;
};

int search(char key[], int totalbarang, barang arr[]) {
    int idx = -1;
    for(int i = 0; i < totalbarang; i++){
        if(strcmp(key, arr[i].jenis) == 0){
            idx = i;
            return idx;
        }
    }
    return idx;
}

int main() {
    FILE *p = fopen("testdata.in", "r");
    int t,tc;
    fscanf(p, "%d\n", &t);
    for(int k = 0; k < t; k++){
        fscanf(p, "%d\n", &tc);
        barang tebar;
        barang arr[tc];
        int tb = 0;
        char d[100];
        for(int l = 0; l < tc; l++){
            fscanf(p, "%[^#]#%[^#]#%d\n", d, tebar.jenis, &tebar.jumlah);
            int r = search(tebar.jenis, tb, arr);
            if(r == -1){ 
                strcpy(arr[tb].jenis, tebar.jenis);
                if(strcmp(d, "sell") == 0){
                    arr[tb].jumlah = -tebar.jumlah;
                } else if(strcmp(d, "buy") == 0){
                    arr[tb].jumlah = tebar.jumlah;
                }
                tb++;
            }else if(r != -1){
                if(strcmp(d, "sell") == 0){
                    arr[r].jumlah -= tebar.jumlah;
                } else if(strcmp(d, "buy") == 0){
                    arr[r].jumlah += tebar.jumlah;
                }
            }
        }
        printf("Case #%d:\n", k+1);

        int f = 0;
        for(int n = 0; n < tb; n++){
            if(arr[n].jumlah < 0){
                printf("stock is not enough for product %s\n", arr[n].jenis);
                f = 1;
            }
        }
        if(!f){
            for(int m = 0; m < tb; m++){
                printf("%s - %d\n", arr[m].jenis, arr[m].jumlah);
            }
        }
    }
    fclose(p);
return 0;
}
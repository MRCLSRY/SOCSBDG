#include <stdio.h>

int arr[8][8];

void cari(int a, int b, int c){
	if(a<0 || a>=8 ||b<0||b>=8)
	return;
	if(c < arr[a][b]){
	arr[a][b] = c;
	}else{
		return;
	}
	cari(a+2,b+1,c+1);
	cari(a+2,b-1,c+1);
	cari(a+1,b+2,c+1);
	cari(a+1,b-2,c+1);
	cari(a-2,b+1,c+1);
	cari(a-2,b-1,c+1);
	cari(a-1,b+2,c+1);
	cari(a-1,b-2,c+1);
}
int main() {
	int tc,i,j,k,l,m,n,o;
    scanf("%d", &tc);
    for(i = 0; i<tc; i++){
        for(j = 0; j<8; j++){
            for(k = 0; k<8; k++){
               arr[j][k] = 10000;
            }
        }
        char a[3],ak[3];
        scanf("%s %s", &a, &ak);
        int b,d,tb,td;
        getchar();
        b = a[0] - 64;
        d = a[1] - 48;
        tb = ak[0] - 64;
        td = ak[1] - 48;
        cari(8-d, b-1, 0);

        printf("Case #%d: %d\n", i+1, arr[8-td][tb-1]);
    }    
	return 0;
}

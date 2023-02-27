#include<stdio.h>
#include<string.h>

struct data{
    int angka;
};

int main(){
    int b,tc,temp;
    scanf("%d",&tc);
    for (int x = 0; x < tc; x++){  
        scanf("%d",&b);
        struct data arr[b];
        for (int i = 0; i < b; i++){
            scanf("%d",&arr[i].angka);
        }
    	for (int i = 0; i < b-1; i++){
        	for (int j = 0; j < b-i-1; j++){
            	if (arr[j].angka>arr[j+1].angka){
                	struct data temp = arr[j];
                	arr[j] = arr[j+1];
                	arr[j+1] = temp;
            	}
        	}
        }
        int div = 0;
        if (b%2==0){
            div = b/2;
        }
        int g = 0;
        int s = 0;
        for (int k = 0; k < div-1; k++){
            g = arr[k+1].angka - arr[k].angka;
            if (g>s){
                s = g;
            }
        }
        int g1 = 0;
        int s1 = 0;
        for (int l = div; l < b-1; l++){
            g1 = arr[l+1].angka - arr[l].angka;
            if (g1>s1){
                s1 = g1;
            }
        }
        if (s>=s1){
            printf("Case #%d: %d\n",x+1,s);
        }
        else{
			printf("Case #%d: %d\n",x+1,s1);
		}
    }
    
return 0;    
}

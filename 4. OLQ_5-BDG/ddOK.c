#include<stdio.h>

int main(){
    long long input, input2, total=0, total2=0; 
    long long i,j;

    scanf("%ld", &input);
    for (i = 0; i < input; i++)
    {
    	total = 0;
    	total2 = 0;
    	
        scanf("%ld", &input2);
        long long isi[input2];
        
        for (j=0; j<input2; j++){
            scanf("%ld", &isi[j]);
            getchar();
            total += isi[j];
        }
    long long y;
        for(y=0; y<input2; y++){
			if(total < isi[y]){
        total2++;

        }
        }
        printf("Case #%ld: %ld\n",i+1, total);
        printf("%ld\n", total2);
	}
    
    return 0;
}


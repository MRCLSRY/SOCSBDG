#include<stdio.h>

int main(){
    long long input, banyak, i,j, a[i],b=0, total=0;

    scanf("%ld", &banyak);

    for (j = 1; j <= banyak; j++){

        scanf("%ld", &input);
   	
            for (i = 0; i < input; i++)
            {
            scanf("%ld",&a[i]);
            b = b += a[i];
            }
    	
		while (input--){
			if(b < a[input]){
        total++;
        }
        }

        printf("Case #%ld: %ld\n",j, b);
        printf("%ld\n", total);
    
    b = 0;
    }

    
    return 0;
}

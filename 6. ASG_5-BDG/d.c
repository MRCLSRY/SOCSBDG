#include<stdio.h>

int main(){
    long long a,b,i,j,k;
    scanf("%d", &a);
    for (i= 1; i <= a; i++)
    {

        scanf("%d",&b);
        for (j = 1; j <= b; j++){
            for (k = 1; k <= b; k++)
            {
            if (j==1||j==b||k==1||k==b){
              printf("*");
            }
            else if(j==k||(k==(b+1)-j))
            {
                printf("*");
            }
            
            else{
                printf(" ");
            }
        }
        printf("\n");
    		}
                printf("\n");
    	}

    
    return 0;
}

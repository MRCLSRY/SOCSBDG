#include<stdio.h>

int main(){

    int a,b,c,i,j,k, input;
    int y=0,x=0,z=1;
    scanf("%d", &a);

    for (input = 0; input < a; input++)
    {
        scanf("%d", &b);
        y = b%2;
        
        printf ("Case #%d:\n",z);
        if (y==0){
        for (i = 1; i <= b; i++)
        {
            for (k = b-i; k>0; k--)
            {
                printf(" ");
            }
            
            for (j = 1; j <= i; j++)
            	{
            		if (j%2 == 0){
            			printf("*");
					}
                else{
				printf("#");
			}
				}
            printf("\n");
        }
		}


        else if (y==1) {
        for (i = 1; i <= b; i++)
        {
            for (k = b-i; k>0; k--)
            {
                printf(" ");
            }
            
            for (j = 1; j <= i; j++)
            	{
            		if (j%2 == 0){
            			printf("#");
					}
                else{
				printf("*");
			}
				}
            printf("\n");
        }
		}	
        z++;
}

    return 0;
}

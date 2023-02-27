#include <stdio.h>

int main (){
    int input, a;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        
        scanf("%d", &a);
        for(int j = 0; j < a; j++){
            for(int k = 0; k < a; k++){
                
                if(j == 0 || k == 0 || j == k || a-k == j + 1){
                    printf("*");
                } 

                else if (j == a - 1 || k == a - 1){
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
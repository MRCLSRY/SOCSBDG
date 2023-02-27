#include <stdio.h>
#include <string.h>

int main(){

   long long banyak,i,j;
   scanf("%lld", &banyak);
   char input[500];

   for (i = 1; i <= banyak; i++){
       long long benar = 1, z=0;
        scanf("%s", &input);

        for (j = strlen(input)-1; j >= z; j--){
        if (input[z] != input[j]){
            benar = 0;
            break;
            }
            z++;
        }

        printf("Case #%lld: ", i);
        
        if (benar == 1){
            printf("Yay, it's a palindrome\n");
        }

        else{
            printf("Nah, it's not a palindrome\n");
        }
        getchar();
   }
    return 0;
}
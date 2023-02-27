#include <stdio.h>
#include <string.h>
#define lli long long int

int main(){

   lli tc;
   scanf("%lld", &tc);


   char input[500];

   for (lli i = 1; i <= tc; i++){
        getchar();
        scanf("%s", &input);
        lli benar = 1;
        lli x = 0;
        for (lli j = strlen(input)-1; j >= x; j--){
            if (input[x] != input[j]){
                benar = 0;
                break;
            }
            x++;
        }

        printf("Case #%lld: ", i);
        
        if (benar == 1)
            printf("Yay, it's a palindrome\n");
        else 
            printf("Nah, it's not a palindrome\n");
   }

    return 0;
}
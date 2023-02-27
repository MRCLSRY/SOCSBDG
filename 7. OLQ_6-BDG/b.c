#include<stdio.h>

int main(){
    long long banyak, input, i,j,k;
    scanf("%lld", &input);

    for (i = 1; i <= input; i++)
    {
        scanf("%lld", &banyak);
        long long a[banyak];

        for (j = 0; j < banyak; j++)
        {
            scanf("%lld", &a[j]);
        }

        printf("Case #%lld: ",i);

        for (k = banyak; k > 0; k--)
        {
            if (k==1){
            printf("%lld\n",a[k-1]);
            }
            else
            {
            printf("%lld ",a[k-1]);
            }
        }
    }



    return 0;
}
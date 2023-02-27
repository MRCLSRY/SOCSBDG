#include <stdio.h>
#include <string.h>

long long int sum(long long int num){
    long long int low = 1, end = 1500000;
    long long int mid, test;
    
    while(low <= end){
        mid = (low + end) / 2;
        if(mid*(mid+1)*(2*mid+1)/6 == num){
            test = mid;
            break;
        }
        else if(mid*(mid+1)*(2*mid+1)/6 < num){
            low = mid + 1;
        }
        else{
            end = mid - 1;
            test = mid;
        }
    }
    return test;
}

int main(){
    int cs;
    long long int M;
    
    scanf("%d", &cs);
    
    for(int i = 1; i <= cs; i++){
        scanf("%lld", &M);
        printf("Case #%d: %lld\n",  i, sum(M));
    }
    return 0;
}
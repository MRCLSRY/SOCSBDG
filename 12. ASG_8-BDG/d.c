#include <stdio.h>
#include <stdlib.h>

struct item{
    int id[101];
    char name[101];
    long long price;
};

int main() {
    int t,i,j;
    scanf("%d", &t);
    struct item arr[t];
    for(i = 0; i < t; i++){
        scanf("%s", &arr[i].id);
        getchar();

        scanf("%[^\n]", &arr[i].name);
        getchar();

        scanf("%lld", &arr[i].price);
        getchar();
    }

    float m;
    if(t % 2 == 0){
        m = arr[t / 2].price + arr[(t / 2) - 1].price;
        m /= 2;
    }
    else if(t % 2 != 0){
        m = arr[t / 2].price;
    }

    for(j = 0; j < t; j++){
        if(arr[j].price >= m){
        printf("%s %s\n", arr[j].id, arr[j].name);
        }
    }
    return 0;
}
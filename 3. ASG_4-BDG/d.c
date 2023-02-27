#include<stdio.h>

long long a,b,c,d,e[3],f[3];
int i;

int main (){
    for(i=0;i<3;i++){
        scanf("(%ld+%ld)x(%ld-%ld)", &a, &b, &c, &d);
        getchar();

        e[i] = a+b;
        f[i] = c-d;
  }
    for (i=0;i<3;i++){
        if (i == 2)  printf("%ld\n", e[i]*f[i]);
        else printf("%ld ", e[i]*f[i]);
    }
  
return 0;
}

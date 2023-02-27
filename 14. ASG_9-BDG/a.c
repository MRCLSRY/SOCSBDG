#include<stdio.h>

int fibo(int n, char a, char b)
{
	if(n == 0){
        printf("%c",a);
    }
    else if(n == 1)
	{
		printf("%c",b);
    }
		
	else{
		return fibo(n-1,a,b) + fibo(n-2,a,b);
		}
}


int main(){
    int tc;
    char c;
    char d;
    int pilih;
    scanf("%d", &tc);
    int i;
    for (i = 0; i < tc; i++)
    {
    scanf("%d %c %c", &pilih, &c, &d);
    printf("Case #%d: ",i+1);
    fibo(pilih,c,d);
    printf("\n");
    }
    

    return 0;
}

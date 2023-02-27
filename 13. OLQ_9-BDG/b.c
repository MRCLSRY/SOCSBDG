#include <stdio.h>

int count = 0;

//fungsi
int fibo(int n)
{
	count += 1;
	if(n == 0 || n == 1)
	{
		return 1;}
		
	else{
		return fibo(n-1) + fibo(n-2);
		}
}

int main()
{
	int tc, n;
	scanf("%d", &tc);
	int i;
	for(i = 0; i < tc; i++)
	{
		scanf("%d", &n);
		fibo(n);
		printf("Case #%d: %d\n", i+1, count);
		count = 0;
	}
	
	return 0;
}

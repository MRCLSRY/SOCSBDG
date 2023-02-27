#include <stdio.h>

int main()
{
	int n, q; 
	long long int total = 0;
	int i, j;
	
	scanf("%d", &n);
	
	int b[100]; 
	int a[100];

	int arr[100];
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	scanf("%d", &q);
	for(i = 1; i <= q; i++)
	{
		scanf("%d %d", &a[i], &b[i]);	
	}
	
	for(i = 1; i <= q; i++)
	{
		for(a[i]; a[i] <= b[i]; a[i]++)
		{
			total += arr[a[i]];
		}
		int x = 0;
		printf("Case #%d: %lld\n", x+i, total);
		total = 0;
	}
	return 0;
}
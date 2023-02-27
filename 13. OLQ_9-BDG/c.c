#include <stdio.h>

int main()
{
	int tc, a, b;	
	scanf("%d", &tc);
	
	for(int i = 0; i < tc; i++)
	{
		scanf("%d %d", &a, &b);
		while(a != 1 && a != b)
		{
			if(a == 1)
			{
				a = a;
			}
			else if(a % 2 == 0)
			{
				a = a / 2;
			}
			else if(a % 2 != 0)
			{
				a = a * 3 + 1;
			}
		}
		
		if(a == b)
		{
			printf("Case #%d: YES\n", i+1);
		}
		
		else if(a != b)
		{
			printf("Case #%d: NO\n", i+1);
		}
	}
	
	return 0;
}
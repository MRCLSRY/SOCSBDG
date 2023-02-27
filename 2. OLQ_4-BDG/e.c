//library import
#include<stdio.h>

//variabel
double a,b,c, total;
double n = 2;

//codes
int main(){

	scanf("%lf %lf", &a, &b);
	double pangkat = 1+(b/100);
	c = pangkat;
	while (n--)
	{
		pangkat *= c;
	}
	
	total = a * pangkat;
	printf("%.2f\n",total);
	
	return 0;
}
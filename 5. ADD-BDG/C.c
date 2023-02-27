#include<stdio.h>

int main(){
	int N, i, j,m, banyakCase,z=0;
	int x,y;
	scanf("%d",&N);
	int F[N];	//banyak kotak
	
	//ngisi kotak
	for(i=0 ; i<N ; i++){
		scanf("%d", &F[i]);
	}
	
	//ngescan berapa banyak case
	scanf("%d", &banyakCase);
	
	for(j=1 ; j<=banyakCase ; j++){
		scanf("%d %d", &x, &y);
		
		m=x-1;
		
		for (m;m<y;m++){
			z+=F[m];
		}
		printf("Case #%d: %d\n", j, z);
		z = 0;
	}
	
	
	
	
}

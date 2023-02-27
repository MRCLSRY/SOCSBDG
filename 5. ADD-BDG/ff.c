#include<stdio.h>

int main(){
	int T;
	int h;
	int i,j,z,x,k,l,m;
	
	scanf("%d", &T); //banyak case
	
	for(i=1; i<=T; i++)//looping brpx program jalan
	{
		scanf("%d", &h); //lebar & tinggi
		printf("Case #%d:\n", i);
		
		//j=baris
		//k=kolom
		
		for(j=1; j<=h; j++){//baris
			
			for(k=h-j ; k>0;k--){//kolom
				//k=5;k>0;k-1
				//k=4;k>0;k-1
				//k=3;k>0;k-1
				//k=2;k>0;k-1
				//k=1;k>0;k-1
				//k=0;k>0;k-1--> GA jalan
				printf(" ");
			}
			
//			for(l=1;l<=j;l++){
//				//j baris
//				printf("*");
//			}

			//j=baris
			//k=kolom
			if (h%2==0){
			
			for(l=1;l<=j;l++){
				m=j+l;
				//j baris
				if (j%2==0){
					
				if(m%2==0){
					printf("*");
				}
				else{
					printf("#");
				}
			}
				
				else{	
				if(m%2==0){
					printf("#");
				}
				else{
					printf("*");
				}
			}
			}
		}
			else{
					for(l=1;l<=j;l++){
				m=j+l;
				//j baris
				if (j%2==0){
					
				if(m%2==0){
					printf("#");
				}
				else{
					printf("*");
				}
			}
				
				else{	
				if(m%2==0){
					printf("*");
				}
				else{
					printf("#");
				}
			}
			}
			}

			
			
			printf("\n");
		}
	}
	return 0;
}


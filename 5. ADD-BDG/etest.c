#include<stdio.h>

int main(){
	long long input;
	int a,b=0, nilaiPeserta=0;
	long long jojo,lili,bibi;
	double mean;
	
	scanf("%lld", &input);
	long long peserta[input];
	
	scanf("%lld %lld %lld",&jojo, &lili, &bibi);
	
	for(a=0;a<input;a++){
		scanf("%lld", &peserta[a]);
	}
	
	b=jojo+lili+bibi;
	
	for(a=0; a<input; a++){
		nilaiPeserta=nilaiPeserta+peserta[a];
	}
	
	mean=(b+nilaiPeserta)/(input+3);
	
	printf("Jojo : ");
	if(jojo>=mean){
		printf("Lulus\n");
	}
	else{
		printf("Tidak Lulus\n");
	}
	
		printf("Lili : ");
	if(lili>=mean){
		printf("Lulus\n");
	}
	else{
		printf("Tidak Lulus\n");
	}
	
		printf("Bibi : ");
	if(bibi>=mean){
		printf("Lulus\n");
	}
	else{
		printf("Tidak Lulus\n");
	}
	return 0;
}

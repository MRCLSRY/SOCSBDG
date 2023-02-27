// #include<stdio.h>

// int main(){
//     int banyak, a, b, i;
//     scanf("%d", &banyak);

//     for (i = 0; i < banyak; i++)
//     {
//         scanf("%d %d", &a, &b);
//         printf("%d\n", ((a/b)<<b));
//     }
    
//     return 0;
// }

#include<stdio.h>

int main(){
	int a,b,c,d,i;
	scanf("%d", &a);
	
	for(i=0; i<a; i++){
		scanf("%d &d", &b , &c);
		d=((b/c)<<c);
		printf("%d\n", d);
		
	}
		
	return 0;
}
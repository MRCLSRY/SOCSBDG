#include <stdio.h>
int main() {
    
    float a, b, c, d, e;
    int i;
	int n = 3;
	
	for(i=0 ; i<3 ; i++ ){
		scanf("%f %f %f %f", &a, &b, &c, &d);
		a = (a/1)*2;
		b = (b/2)*4;
		c = (c/3)*6;
		d = (d/4)*4;
		e = a+b+c+d;
		printf("%.2f\n", e);	

}
	return 0;
}

//    float a, b, c, d;
//    float n = 3;
//
//    while(n--)
//    {
//        scanf("%f %f %f %f", &a, &b, &c, &d);
//        printf("%.2f\n", (a/1)*2 + (b/2)*4 + (c/3)*6 + (d/4)*4);
//    }

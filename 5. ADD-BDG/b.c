//#include<stdio.h>
//
//int main(){
//    long long a[3],b,c,d;
//    long long i;
//
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%ld",&a[i]);
//    }
//    
//    
//    //a = daging
//    //b = sayur
//    //c = telur
//    if (a[0]>a[1]&&a[0]>a[2])
//    {
//        printf("Daging\n");
//
//        if (a[1]>a[2])
//        {
//            printf("Sayur\n");
//            printf("Telur\n");
//        }   
//        else{
//            printf("Telur\n");
//            printf("Sayur\n");
//        }
//
//    }
//    
//    if (a[1]>a[0]&&a[1]>a[2])
//    {
//        printf("Sayur\n");
//        if (a[0]>a[2])
//        {
//            printf("Daging\n");
//            printf("Telur\n");
//        }   
//        else{
//            printf("Telur\n");
//            printf("Daging\n");
//        }
//    }
//
//    if (a[2]>a[0]&&a[2]>a[1])
//    {
//        printf("Telur\n");
//        if (a[0]>a[1])
//        {
//            printf("Daging\n");
//            printf("Sayur\n");
//        }   
//        else{
//            printf("Sayur\n");
//            printf("Daging\n");
//        }
//    }
//
//    return 0;
//}

#include<stdio.h>
int main(){
	long long input1, input2, input3;
	
	scanf("%ld %ld %ld", &input1, &input2, &input3);
//	input1 = daging
//	input2 = sayur
//	input3 = telor
	
	if(input1>input2 && input1>input3){
		printf("Daging\n");
		
		if(input2>input3){
			printf("Sayur\n");
			printf("Telur\n");
		}
		else{
			printf("Telur\n");
			printf("Sayur\n");
		}
	}

	if(input2>input1 && input2>input3){
		printf("Sayur\n");
		
		if(input1>input3){
			printf("Daging\n");
			printf("Telur\n");
		}
		else{
			printf("Telur\n");
			printf("Daging\n");
		}
	}
	
	if(input3>input2 && input3>input1){
		printf("Telur\n");
		
		if(input1>input2){
			printf("Daging\n");
			printf("Sayur\n");
		}
		else{
			printf("Sayur\n");
			printf("Saging\n");
		}
	}
	

	return 0;
}



















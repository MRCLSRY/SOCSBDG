#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
int X,Y;  

    FILE *fp1; 
    fp1 = fopen("testdata.in", "r"); 
    while(!feof(fp1)) 
    { 
        fscanf(fp1, "%d %d", &X, &Y); 
    } 
    printf("%d\n",X+Y ); 
    fclose(fp1); 

    return 0;
}

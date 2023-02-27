#include<stdio.h>   

    int main(){  
    int n,i,tc,j,x, total;        
    scanf("%d",&tc);

    for (j = 0; j < tc; j++)
    {
        int a[31]={0};
        scanf("%d %d",&n, &x);
        for(i=0;n!=0;i++)    
        {    
            a[i]=n%2;    
            n=n/2; 
        }
            printf("%d\n",a[x]);  
    }
       
return 0;  
}
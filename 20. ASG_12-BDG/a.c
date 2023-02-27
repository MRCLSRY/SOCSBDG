#include<stdio.h>

int binary_search(int arr[],int n,int k)
{
    int hasil=-2;
    int l=0,r=n-1,m;

    while(l<=r)
    {
        m=(l+r)/2;

        if(arr[m]<k)
            l=m+1;
        else
        {   
            if(arr[m]==k)
            hasil=m;
            r=m-1;
        }
    }
return hasil+1;
}

int main()
{

    int n,m;
    scanf("%d%d",&n,&m);


    int A[n],Q[m];
    for(int i=0;i<n;i++)
    scanf("%d",&A[i]);

    for(int i=0;i<m;i++)
    scanf("%d",&Q[i]);

    for(int i=0;i<m;i++)
    {
        int hasil = binary_search(A,n,Q[i]);
        printf("%d\n",hasil);
    }

}
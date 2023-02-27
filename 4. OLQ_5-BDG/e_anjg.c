#include<stdio.h>


int main(){
    long long b,z,x, a,c,i,j,k,zz=0, max=0, xyz=0;

    //banyak case
    scanf("%lld", &a);

    for (i = 1; i <= a; i++)
    {
        zz=0;
        max=0;
        xyz=0;
        
        //banyak angka
        scanf("%lld", &b);
        long long banyak[b];
        long long oke[b];

        //scan nilai
        for (j = 0; j < b; j++)
        {
            scanf("%lld", &banyak[j]);
            oke[j]=0;
        }

        // sorting
        for (z = 0; z < b; z++)
        {
            long long min=z;
            for (x = z+1; x < b; x++)
            {
                if(banyak[x]<banyak [min]){
                    min = x;
                }     
            }
            long long temp = banyak[min];
            banyak[min] = banyak[z];
            banyak[z] = temp;
        }
        

        //cek frekuensi
        for (j = 0; j < b; j++)
        {
            for (k = j; k < b; k++)
            {
            if(banyak[j]==banyak[k+1]){
            oke[j]+=1;}
            }
        }
      
        //cek frekuensi terbanyak  
        for (j = 0; j < b; j++)
        {
            if(oke[j]>max){
                max=oke[j];
            }
        }

        // brp frekuensi terbanyak dan bikin array sebanyak frekuensi terbanyak

        printf("Case #%lld: %lld\n", i, max+1);

        for (j = 0; j < b; j++)
        {
            if(oke[j]==max){
                zz++;
                }
            }

        long long akhir[zz];

        //masukin nilai ke array yg atas
        for (j = 0; j < b; j++)
        {
            if(oke[j]==max){
                akhir[xyz]=banyak[j];
                xyz++;
                }
            }

        //print akhir
        for (j=0; j<zz; j++){
            if(j==zz-1){
            printf("%lld\n", akhir[j]);
            }
            else
            {
                printf("%lld ", akhir[j]);
            }
        }   
    }
    return 0;
}
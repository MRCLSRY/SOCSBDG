#include<stdio.h>


int main(){
    int b,z,x, a,c,i,j,k,zz=0, max=0, xyz=0, min=1000000000;

    //banyak case
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        zz=0;
        max=0;
        xyz=0;
        
        //banyak angka
        scanf("%d", &b);
        int banyak[b];
        int oke[b];

        //scan nilai
        for (j = 0; j < b; j++)
        {
            scanf("%d", &banyak[j]);
            oke[j]=0;
        }

        // // sorting
        // for (z = 0; z < b; z++)
        // {
        //     int min=z;
        //     for (x = z+1; x < b; x++)
        //     {
        //         if(banyak[x]<banyak [min]){
        //             min = x;
        //         }     
        //     }
        //     long long temp = banyak[min];
        //     banyak[min] = banyak[z];
        //     banyak[z] = temp;
        // }
        

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

        printf("Case #%d: %d\n", i, max+1);

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
        //cari nilai terkecil
         for (j = 0; j < b; j++)
        {
            if(akhir[j]<min);{
                min=akhir[j];
            }
            }       

        //print akhir
                printf("%d\n", min);
    }
    return 0;
}
#include<stdio.h>

int main(){
    int tc,x,y,i;
    
    scanf("%d", &tc);

    for (i = 0; i < tc; i++)
    {
        int hasil=0, kali=1;

        scanf("%d %d", &x, &y);

        while (x>0 || y>0)
        {
            int total=0;
            total = (x%10)+(y%10);
            total = total%10;
            hasil = hasil + (total*kali);
            x = x/10;
            y = y/10;
            kali = kali*10;
        }
        printf("Case #%d: %d\n",i+1, hasil);

    }
    

    return 0;
}

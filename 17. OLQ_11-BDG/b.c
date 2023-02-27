#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    int tc;
    char temp;
    FILE *fp1; 
    fp1 = fopen("testdata.in", "r");  
    fscanf(fp1, "%d", &tc);
    fscanf(fp1, "%c", &temp);     
    char en[9]={'O','I','N','E','A','S','G','T','B'};

    for(int j=1;j<=tc;j++)
    { 
        int k; 
        fscanf(fp1, "%d", &k);
        fscanf(fp1, "%c", &temp);   
        char s[1000]; 
            fscanf(fp1,"%[^\n]", s);

        int n=strlen(s); 
        for(int i=0;i<n;i++) 
        { 
            if(s[i]==' ')
            {
                continue;
            }

            char ch=s[i]; 
            if(ch>='A' && ch<='Z')
            { 
                ch-=k;
            }

            else if(ch>='0' && ch<='9') 
            { 
                int f=ch-'0'; 
                ch=en[f]; 
                ch-=k; 
            } 

            if(ch<'A') 
                ch+=26; 
            s[i]=ch; 
        } 
        printf("Case #%d: ",j); 
        printf("%s",s); 
        printf("\n"); 
    }
    fclose(fp1); 
return 0; 
}
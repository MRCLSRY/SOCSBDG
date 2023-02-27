#include<stdio.h>
#include<string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    getchar();
    int prin=0;
    int pirn=0;
        char su[tc+tc-1];
        scanf("%[^\n]", su);
        int total = strlen(su);
        for (int i = 0; i < total; i++)
        {
            if(su[i]=='1'){
                prin ++;
            }
            else if(su[i]=='0'){
                pirn ++;
            }
        }

        if (prin > 0)
        {
            printf("not easy\n");
        }
        else if (pirn == tc){
             printf("easy\n");
        }
        
    return 0;
}
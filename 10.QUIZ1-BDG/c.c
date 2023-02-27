#include<stdio.h>
#include<string.h>

int main(){
    char kata[10001];

	scanf("%[^\n]", &kata);
    
    
    for (int i = 0; i < strlen(kata); i++)
    {
        if(kata[i]>= 'a' && kata[i]<='z'){ 
        kata[i]-=32;
        }
            
        if(kata[i] == 'A'){
            kata[i]-= 13 ;
        }
        else if(kata[i]== 'R'){
            kata[i]-= 32;
        }
        else if(kata[i]== 'I'){
            kata[i]-= 24;
        }
        else if(kata[i]== 'E'){
            kata[i]-= 18;
        }
        else if(kata[i]== 'S'){
            kata[i]-= 30;
        }
        else if(kata[i]== 'G'){
            kata[i]-= 17;
        }
        else if(kata[i]== 'T'){
            kata[i]-= 29;
        }
        else if(kata[i]== 'B'){
            kata[i]-= 10;
        }
        else if(kata[i]== 'P'){
            kata[i]-= 23;
        }
        else if(kata[i]== 'O'){
            kata[i]-= 31;
        }    

    }
    printf("%s\n", kata);
    return 0;
}
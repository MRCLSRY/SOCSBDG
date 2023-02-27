#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

typedef struct
{
    char *name;
    char *plant;
}NODE;

int get_index(char *str){
    for(int i=0;str[i]!='\0';i++)
    { 
        if(str[i]=='#')
        return i;
    }
    return 0;
}

int binary_search(NODE array[],int len,char *line){
    int start=0,end=len-1;
    while(start<=end)
    {
        int middle=(start+end)/2;
        int nilai=strcmp(line,array[middle].name);
        if(nilai==0)
            return middle;
        else if(nilai<0)
            end=middle-1;
        else
            start=middle+1;
    }
    return -1;
}

int main(){
    FILE *fp=fopen("testdata.in","r");
    char *line=(char *)malloc(MAX*sizeof(char));
    fgets(line,sizeof(line),fp);
    int len=atoi(line);

    NODE array[len];
    for(int i=0;i<len;i++){
        fgets(line,MAX,fp);
        line[strlen(line)-1]='\0';
        int index=get_index(line);
        array[i].plant=(char *)malloc(MAX*sizeof(char));
        strcpy(array[i].plant,line+index+1);
        line[index]='\0';
        array[i].name=(char *)malloc(MAX*sizeof(char));
        strcpy(array[i].name,line);
    }

    fgets(line,sizeof(line),fp);
    int n=atoi(line);

    char result[n][MAX];
    for(int i=0;i<n;i++){
        fgets(line,MAX,fp);
        line[strlen(line)-1]='\0'; 
        int index=binary_search(array,len,line);
        
        if(index==-1)
            strcpy(result[i],"N/A");
        else
            strcpy(result[i],array[index].plant);
    }

    for(int i=0;i<n;i++)
    {
        printf("Case #%d: %s\n",i+1,result[i]);
    }
    
    fclose(fp);
 return 0;
}


  

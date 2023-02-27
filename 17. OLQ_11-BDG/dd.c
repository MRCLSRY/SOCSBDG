#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(){
    char temp;
    char nama[100];
    FILE *fp1; 
    fp1 = fopen("testdata.in", "r");
    int tc;

    fscanf(fp1, "%d", &tc);
    fscanf(fp1, "%c", &temp);
    // printf("%d\n", tc);

    while (tc--){
        fscanf(fp1, "%s", &nama);
        int a = strlen(nama);
        int agus[26]={0};
        int maks[26]={0};
        int maks1[26]={0};
        // printf("%s\n", nama);
        // printf("%d\n", a);

        int ubah;
        fscanf(fp1, "%d", &ubah);
        // printf("%d\n", ubah);
        fscanf(fp1, "%c", &temp);

        for(int x = 0; x<ubah; x++)
        {
            char kata[4];
            fscanf(fp1, "%[^\n]", &kata);
            fscanf(fp1, "%c", &temp);
            // printf("%c %c\n", kata[0], kata[2]);  
            for (int ijk = 0; ijk < a; ijk++)
            {
                if (nama[ijk] == kata[0] && maks[kata[0]-'A']==0 && maks1[kata[0]-'A']==0)
                {
                    nama[ijk] = kata[2];
                    agus[kata[2]-'A']++;
                    
                    // printf("%d", agus[0]);
                }
            }
            maks[kata[0]-'A']++;
            maks1[kata[2]-'A']++;                      
        }
        int frequency[26] = {0};
        for (int i = 0; i < a; i++){
            frequency[nama[i] - 'A']++; 
        }
        // printf("%d", frequency[0]);
        for (int i = 0; i < 26; i++){
            if (frequency[i] != 0 && agus[i]!= 0){
                printf("%c %d\n", 'A' + i, frequency[i]); 
            }
        }                 
    }

    fclose(fp1); 
    return 0;
}
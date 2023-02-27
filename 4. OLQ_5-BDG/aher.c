#include <stdio.h>

int main(){
    int x, y;
    scanf ("%d %d", &x, &y);

    int plant[x][y];

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            scanf ("%d", &plant[i][j]);
        }
    }
    int t;
    scanf ("%d", &t);
    int a[t], b[t], c[t];
    for (int i = 1; i <= t; i++)
    {
        scanf ("%d %d %d", &a[i], &b[i], &c[i]);
    }
    int count = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if ((i) == a[count] && (j) == b[count])
            {
                plant[i][j] = c[count];
                count++;
            }
        }
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if(j==y){
            printf ("%d\n", plant[i][j]);
            }
            else
            {
            printf ("%d ", plant[i][j]);
            }
            
        }
    }
    return 0;
}
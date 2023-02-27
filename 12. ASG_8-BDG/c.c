#include <stdio.h>
#include <string.h>
#define MAXC 20
#define MAX 1000
#define MAXCODE 8
#define MINTIME 7
#define MAXTIME 19

void getDay(char day[])
{
    do{
    scanf("%s", day);

    if( (strcmp(day, "Monday") == 0) || (strcmp(day, "Tuesday") == 0) ||
(strcmp(day, "Wednesday") == 0) || (strcmp(day, "Thursday") == 0) ||
(strcmp(day, "Friday") == 0) || (strcmp(day, "Saturday") == 0))
    break;
    }while(1);
}

int getNumberOfCourses()
{
    int no;
    do
    {
    scanf("%d", &no);
    if(no >= 1 && no <= 1000)
    return no;
    }while(1);
}

int getTime()
{
    int time;
    do
    {
    scanf("%d", &time);
    if(time >= 7 && time <= 19)
    return time;
    }while(1);
}

int main()
{
    int c;
    char code[MAX][MAXC];
    int time[MAX];
    char day[MAX][10];
    int numberOfCourses = getNumberOfCourses();

    for(c = 0; c < numberOfCourses; c++)
    {
        scanf("%s", code[c]);
        getDay(day[c]);
        time[c] = getTime();
    }

    int urut;
    scanf("%d", &urut);

    for(c = 0; c < urut; c++)
    {
    int print;
    scanf("%d",&print);
    printf("Query #%d:\n", (c + 1));
    printf("Code: %s\n", code[print-1]);
    printf("Day: %s\n", day[print-1]);
    
    if (time[print-1]<10)
    {
    printf("Time: 0%d:00\n", time[print-1]);   
    }

    else{
    printf("Time: %d:00\n", time[print-1]);
    }
    }
    
return 0;
}
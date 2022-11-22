//17.WAP TO READ ROLL NUMBERS AND MARKS OF STUDENTS IN TWO DIFFERENT ARRAY AND PRINT MARKS ACCORDING TO ROLL NUMBER PROVIDED BY USER
#include<stdio.h>
#define MAX 10
int main()
{
    int roll[MAX],marks[MAX];
    int i,j,n,p=0;

    printf("enter roll number and marks of students\n");
    for(i=0;i<MAX;i++)
    {
        scanf("%d",&roll[i]);
        scanf("%d",&marks[i]);
    }
    printf("students roll numer with their respective marks");
    for(i=0;i<MAX;i++)
    {
        printf("%d.%d\n",roll[i],marks[i]);
    }

    printf("enter roll number\n");
    scanf("%d",&n);
    for(i=0;i<MAX;i++)
    {
        if(n==roll[i])
        {
            p=i;
        }
        
    }
    printf("%d",marks[p]);

}
//WAP TO ADD THE ELEMENTS OF ROW AND COLUMN 
#include<stdio.h>
int main()
{
    
    int a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j,sumr=0,sumc=0;
    printf("sum of columns :");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sumr=sumr+a[i][j];
        }
        printf("%d,",sumr);
    }
    printf("\nsum of rows :");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sumc=sumc+a[i][j];
        }
        printf("%d,",sumc);

    }

}
//PATTERN IN C__7
#include<stdio.h>
int main()
{
    int i,j,k,c=80,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c/2-i ;j++)
        {
        printf(" ");
        }
        for(k=1;k<=2*i-1 ;k++)
        {
            printf("*");
          //  printf("%d",i);
          // printf("%d",j);
           // printf("%d",k);
        }
        printf("\n");
    }
}
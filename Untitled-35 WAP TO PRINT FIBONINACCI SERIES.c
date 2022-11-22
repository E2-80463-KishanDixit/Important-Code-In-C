//WAP TO PRINT FIBONINACCI SERIES
#include<stdio.h>
 int main()
{
    int i,a=0,b=1,c=0,n;
    printf("enter limit of the series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ,",a);
        c=a+b;
        a=b;
        b=c;
    }
}
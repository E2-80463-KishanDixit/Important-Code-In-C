//TO CHECK FACTORS OF GIVEN NUMBERS OR PERFECT NUMBER==it means if sum of the factors of a number is equal to that number
#include<stdio.h>
int main()
{
    int i,n,fctr=0,sum=0,p=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        fctr=n%i;
        if(fctr==0)
        {
        printf("%d\n",i);
        p=i;
        sum=sum+p;
        }
    }    
        if(sum==n)
        {
        printf("%d  is a perfect number",n);
        }
        else
        {
            printf("%d not a perfect number",n);
        }
    
}
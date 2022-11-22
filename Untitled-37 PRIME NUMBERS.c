//PRIME NUMBERS
#include<stdio.h>
int main()
{
    int i,count,n,p=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    count=n%i;
    if(count==0)
    {
      p=++p;
    }
    }
    if(p==2)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("it is not");
    }
}
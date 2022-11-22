//TO CHECK A PALINDROM 
#include<stdio.h>
int main()
{
    int n,sum=0,temp,r;
    printf("enter  number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    printf("it is a palindrom number");
    else
    printf("it is not");
}
//WAP TO FACTORIAL OF A GIVIN NUMBER
#include<stdio.h>
int main()
{
    int a,rslt;
    int fact(int);
    printf("enter a number\n");
    scanf("%d",&a);
    rslt=fact(a);
    printf("\nfactorial of givin number %d is %d",a,rslt);
}
int fact(int a)
{
    int p=1;
    if(a==0)
    {
    return 1;
    }
    else
    {
    p=a*fact(a-1);
    return p;
    }
}

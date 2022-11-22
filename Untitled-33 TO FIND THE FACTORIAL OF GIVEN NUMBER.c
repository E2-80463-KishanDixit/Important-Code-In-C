//TO FIND THE FACTORIAL OF GIVEN NUMBER
#include<stdio.h>
int main()
{
    int n,i,fctrl=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fctrl=fctrl*i;
    }
    printf("%d",fctrl);
}
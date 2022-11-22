//REVERSE OF A GIVEN NUMBER
#include<stdio.h>
 int main()
{
    int a,i,n,p;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter number of digits");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=a%10;
        printf("%d",p);
        p=a/10;
        a=p;
    }
}





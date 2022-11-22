//15.from depth in c 
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter a character \nand enter a number\n");
    scanf("%c %d",&a,&b);
    if(b>0)
    {
    for(i=1;i<=b;i++)
    {
        printf("%c\n",a);
    }
    }
    else
    {
        for(i=1;i<=2;i++)
        {
        printf("%c",a);
        }
    }

}
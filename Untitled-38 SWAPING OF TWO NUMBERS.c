//SWAPING OF TWO NUMBERS
#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("value of a is %d\nvalue of b is %d ",a,b);
}

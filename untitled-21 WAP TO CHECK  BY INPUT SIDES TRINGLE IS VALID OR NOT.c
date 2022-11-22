//WAP TO CHECK  BY INPUT SIDES TRINGLE IS VALID OR NOT 
#include<stdio.h>
 int main()
{
int a1,a2,a3;
printf("enter three sides of a angle\n");
scanf("%d%d%d",&a1,&a2,&a3);

if(a1>a2&&a1>a3&&a2+a3>a1)
{
    printf("tringle is valid");
}
else if(a2>a1&&a2>a3&&a1+a3>a2)
{
    printf("tringle is valid");
}
else if(a3>a1&&a3>a2&&a1+a2>a3)
{
printf("tringle is valid");
}
else
{
printf("tringle is invalid");
}
}

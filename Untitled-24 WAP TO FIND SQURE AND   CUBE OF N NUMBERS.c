//WAP TO FIND SQURE AND   CUBE OF N NUMBERS
#include<stdio.h>
 int main()
{
int  i,a,sqr,qub,i_p,p,q,t;
printf("choose a choise:\n 1.squre\n2.cube\nenter 1 for squre 2 for cube\n");
scanf("%d",&p);
if(p==1)
{
printf("enter a number\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
i_p=i ;   
sqr=i*i;
printf("%d=%d\n",i_p,sqr);
}
}
if(p==2)
{
printf("enter a number");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
i_p=i;
qub=i*i*i;
printf("%d=%d\n",i_p,qub);
}
}
else
printf("choose right choice");
}
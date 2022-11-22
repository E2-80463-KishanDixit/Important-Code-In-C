//WAP TO FIND SUM AND AVERAGE OF N NATURAL
#include<stdio.h>
 int main()
{
int i,sum=0,avrg,a;
printf("enter a number\n ");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
    sum=sum+i;
    printf("%d\n",i);
}    
printf("sum of numbers is: %d\n",sum);
avrg=sum/a;
printf("average of given numbers is %d\n",avrg);
}
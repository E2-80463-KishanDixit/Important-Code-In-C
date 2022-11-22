//salary
#include<stdio.h>
#include<conio.h>
main()
{
int salary,allounce,rent ,gsalary;
printf("Enter yuor salary:");
scanf("%d",&salary);
salary=salary-salary*40/100;
salary=salary-salary*20/100;
printf("your gross salary  is %d",salary);
}
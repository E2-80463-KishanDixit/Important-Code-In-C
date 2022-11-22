// WAP TO CHECK A TRIANGLE IS EQUILATERAL,ISOSCELES AND SCALENE
#include<stdio.h>
 int main()
{
int s1,s2,s3;
printf("enter three sides of a tringle\n");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1==s2==s3)
printf("triangle is a equilateral\n");
 else if(s1==s2||s2==s3||s1==s3)
printf("tringle is a isoscales\n");
else
printf("tringle is a scalene\n");
}
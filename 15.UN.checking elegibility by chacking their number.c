//15.UN.checking elegibility by chacking their number
#include<stdio.h>
int main()
{
int math,py,chem,sum=0,sum2=0;
printf("enter your number:\nmath\nphysics\nchemistery\n");
scanf("%d %d %d",&math,&py,&chem);
sum=math+py+chem;
sum2=math+py;
if(math>=65&&py>=55&&chem>=50&&sum>=188&&sum2>=137)
printf("you are elegible ");
else
printf("you are not elegible");
}
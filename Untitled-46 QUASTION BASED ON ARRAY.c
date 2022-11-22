//QUASTION BASED ON ARRAY
#include<stdio.h>
int main()
{
    int i,std[5],sum=0;
    float avg=0,pr=0;;
    printf("enter five subjects number\n\n");
    for(i=0;i<5;i++)
    scanf("%d",&std[i]);
    for(i=0;i<5;i++)
    printf("\n%d",std[i]);
   // for(i=4;i>=0;i--)
   // printf("\n%d\n",std[i]);
   for(i=0;i<5;i++)
   {
   sum=sum+std[i];
   }
   printf("\nsome of numbers of all subject is %d \n",sum);
   avg=sum/5.0;
   printf("average of these numbers %f\n",avg);
   pr=sum*100/500;
   printf("%f ",pr);
   
}
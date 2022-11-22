//WAP TO FIND ODD AND EVEN NUM AND THERE SUM 
#include<stdio.h>
 int main()
{
    int a,i,odd=0,sum=0,p,even=0;
    printf("choose a choice :\n1.odd\n2.even\n");
    scanf("%d",&p);
    if(p==1)
    {
    printf("enter a number\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        odd=2*i+1;
        printf("%d\n",odd);
        sum=sum+odd;
    }
    printf("sum of numbers is%d",sum);
    }
    else
    {
        printf("enter a number\n");
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            even=2*(i+1);
            printf("%d\n",even);
            sum=sum+even;
        }
        printf("sum is %d ",sum);
    }

}
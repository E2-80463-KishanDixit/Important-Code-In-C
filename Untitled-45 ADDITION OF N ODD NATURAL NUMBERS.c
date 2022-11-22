//ADDITION OF N ODD NATURAL NUMBERS
#include<stdio.h>
int odd(int,int,int);
int main()
{
    int n,i=0,sum1=0,sum2=0;
    printf("enter a number\n");
    scanf("%d",&n);
    sum1=odd(n,i,sum2);
    printf("sum of %d odd numbers is %d",n,sum1);
}
int odd(int n,int i,int sum2)
{
    if(i>=n)
    {
       return sum2;
    }
    else
    {
        //printf("befor i=%d    sum2=%d\n",i,sum2);
        sum2=sum2+2*i+1;
        i++;
       // printf("after   i=%d  sum2=%d\n\n",i,sum2);
        odd(n,i,sum2);
    }

}
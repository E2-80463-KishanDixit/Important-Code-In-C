//CALCULATE THE POWER OF A GIVIN NUMBER
//CALCULAT THE LEAP YEAR
#include<stdio.h>
int main()
{
    int a,b,val=1,i;
    void year(void);
    printf("enter the value and its power\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        val=val*a;
    }
    printf("result is %d\n",val);
    year();
}
void year()
{
    int a,rlt;
    printf("enter a year\n");
    scanf("%d",&a);
    rlt=a%4;
    if(rlt==0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf(" it is a simple year");
    }

}
//TO FIND THE SECOND LARGEST NUMBER OF ARRAY--------------------wrong
#include<stdio.h>
int main()
{
    int a[6],i,lrg,sec;
    printf("enter 6 enteries\n");
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    if(a[0]>a[1])
    {
        lrg=a[0];
        sec=a[1];
    }
    else 
    {
        lrg=a[1];
        sec=a[0];
    }
    for(i=2;i<6;i++)
    {
        if(lrg<a[0])
        {
             sec=lrg;
             lrg=a[i];
        }
        else if(sec<a[i])
        {
            sec=a[i];
        }
    }
    printf("largest number is %d and second largest number is %d",lrg,sec);
}

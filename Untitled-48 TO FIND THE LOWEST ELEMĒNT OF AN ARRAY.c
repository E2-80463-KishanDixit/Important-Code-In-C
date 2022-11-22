//TO FIND THE LOWEST ELEMĒNT OF AN ARRAY
#include<stdio.h>
int main()
{
    int a[6],i,c;
    printf("enter 6 enteries\n");
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    c=a[0];
    for(i=1;i<6;i++)
    {

    if(a[i]<c)
    {
        c=a[i];
    }
    }
    printf("lowest number is %d",c);
}

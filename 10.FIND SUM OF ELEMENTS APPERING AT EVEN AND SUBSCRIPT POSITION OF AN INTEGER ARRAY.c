 //10.FIND SUM OF ELEMENTS APPERING AT EVEN AND SUBSCRIPT POSITION OF AN INTEGER ARRAY
#include<stdio.h>
#define MAX 60
int main()
{
    int a[MAX];
    int i,n,eSUM=0,oSUM=0;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        eSUM=eSUM+a[i];
        else
        oSUM=oSUM+a[i];
    }

    printf("sum of event subscript elements: %d\n",eSUM);
    printf("sum of odd subscipt elements: %d\n",oSUM);

}
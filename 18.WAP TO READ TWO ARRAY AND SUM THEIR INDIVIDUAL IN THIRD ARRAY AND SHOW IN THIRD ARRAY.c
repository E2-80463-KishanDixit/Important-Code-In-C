//18.WAP TO READ TWO ARRAY AND SUM THEIR INDIVIDUAL IN THIRD ARRAY AND SHOW IN THIRD ARRAY
#include<stdio.h>
#define MAX 15
int main()
{
    int a[MAX],b[MAX],c[MAX];
    int i,p,q,ref=0;
    printf("enter count of elements in 1st array\n");
    scanf("%d",&p);

    printf("enter count of elements  2nd array\n");
    scanf("%d",&q);

     if(p>q)
    {
    ref=p;
    }
    else
    {
    ref=q;
    }

    printf("enter elements of 1st array\n");
    for(i=0;i<ref;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements enter 2nd array\n");
    for(i=0;i<ref;i++)
    {
        scanf("%d",&b[i]);
    }

    

    for(i=0;i<ref;i++)
    {
        c[i]=a[i]+b[i];
    }

    printf("sum of arrays respective elements\n");
    for(i=0;i<ref;i++)
    printf("%d\n",c[i]);

}
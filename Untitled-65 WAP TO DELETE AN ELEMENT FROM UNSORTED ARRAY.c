//WAP TO DELETE AN ELEMENT FROM UNSORTED ARRAY
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,j,n,loc,index;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter location to delete an element\n");
    scanf("%d",&loc);
    if(loc>n)
    {
        printf("enter valid location");
    }
    else
    {
    for(i=loc;i<n;i++)    //over write the array
    {
        a[i-1]=a[i];
    }

        for(i=0;i<n-1;i++)
       {
       printf("%d\n",a[i]);
       }
    }   


}
//WAP TO INSERT AN ELEMENT IN SORTED ARRAY
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,j,n,temp,min,key,loc;
    printf("enter number of count\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //using slection sort technique
    printf("your sorted array\n");
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("enter a element you want to insert\n");
    scanf("%d",&key);

    printf("enter your location\n");
    scanf("%d",&loc);


    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }

    a[loc]=key;

    printf("final array\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }


}
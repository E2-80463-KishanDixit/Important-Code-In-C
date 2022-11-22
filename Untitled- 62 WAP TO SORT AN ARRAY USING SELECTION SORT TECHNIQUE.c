//WAP TO SORT AN ARRAY USING SELECTION SORT TECHNIQUE
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int n,i,j,min,temp;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your sorted array\n");

    for(i=0;i<n-1;i++)
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
}
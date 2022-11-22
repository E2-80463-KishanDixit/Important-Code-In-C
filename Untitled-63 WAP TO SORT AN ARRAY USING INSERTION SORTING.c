//WAP TO SORT AN ARRAY USING INSERTION SORTING
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,j,temp,n;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your sorted array\n");

    for(i=1;i<n;i++)
    {
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    } 

   /* for(i=1;i<n;i++)
    {
        temp=a[i];
    
        for(j=i-1;j>=0;j--)
        {
           
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
        }
        a[j+1]=temp;
    }
        
        for(i=0;i<n;i++)
        {
        printf("%d\n",a[i]);
        }*/
}
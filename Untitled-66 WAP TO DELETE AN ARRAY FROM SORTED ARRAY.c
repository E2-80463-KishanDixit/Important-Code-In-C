//WAP TO DELETE AN ARRAY FROM SORTED ARRAY
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,j,temp,n,loc,index;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your sorted array\n");
    // INSERTION SORT TECHNIQUE
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

    printf("enter location to delete element\n");
    scanf("%d",&loc);
    index=loc-1;

    for(i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
        
    }

    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }


    
}
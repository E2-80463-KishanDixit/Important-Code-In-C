//WAP TO SEARCH AN ELEMENT USING BINARY SEARCH
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int l,r,data,mid,n,i;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter list of elements \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("enter a number you want to search\n");
    scanf("%d",&data);
     l=0,r=n-1;
    
    while(l<r)
    {
   
    mid=(l+r)/2;

    if(data==a[mid])
    {
        printf("%d is present at index number %d",data,mid);
        break;
    }
    else if(data<a[mid])
    {
        r=mid-1;
    }
    else if(data>a[mid])
    {
        l=mid+1;
    }
    }
    if(l>r)
    {
        printf("element is not found");
    }
}
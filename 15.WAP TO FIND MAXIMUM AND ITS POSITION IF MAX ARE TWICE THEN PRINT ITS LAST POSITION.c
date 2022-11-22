//15.WAP TO FIND MAXIMUM AND ITS POSITION IF MAX ARE TWICE THEN PRINT ITS LAST POSITION
#include<stdio.h>
#define MAX 60
int main()
{
    int a[MAX];
    int i,j,n,ref;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    
    i=0;
    ref=i;
    for(j=i+1;j<n;j++)
    {
         if(a[ref]<=a[j])
        {
            ref=j;

        }
    }
    
    printf("maximum number is %d and index number is %d",a[ref],ref);
}
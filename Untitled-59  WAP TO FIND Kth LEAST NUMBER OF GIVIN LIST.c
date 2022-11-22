// WAP TO FIND Kth LEAST NUMBER OF GIVIN LIST
#include<stdio.h>
#define MAX 40
int main()
{
    int a[MAX];
    int i,j,k,p,temp;
    printf("enter count of elements\n");
    scanf("%d",&p);
    printf("enter list of number\n");
    for(i=0;i<p;i++)
    scanf("%d",&a[i]);
    printf("list in assending order\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<p;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\nenter the Kth least value\n");
    scanf("%d",&k);
    printf("%d least value of list is %d",k,a[k-1]);
}
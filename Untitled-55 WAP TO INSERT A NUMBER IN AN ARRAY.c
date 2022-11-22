//WAP TO INSERT A NUMBER IN AN ARRAY 
#include<stdio.h>
int main()
{
    int n,p,q,r,i;
   int a[n];
   printf("enter size of array\n");
   scanf("%d",&n);
   printf("enter number of elements\n");
   scanf("%d",&p);
   printf("enter elements \n");
   for(i=0;i<p;i++)
   {
   scanf("%d",&a[i]);
   }
   printf("your array:");
   for(i=0;i<p;i++)
   {
   printf("%d ",a[i]);
   }
   printf("\n");
   printf("enter the number to insert in array\n");
   scanf("%d",&q);
   printf("enter the location to insert in array\n");
   scanf("%d",&r);
    printf("your modified array:\n");
   for(i=p-1;i>=r;i--)
   {
       a[i+1]=a[i];
   }
   a[r]=q;
   for(i=0;i<=p;i++)
   {
   printf("%d ",a[i]);
   }
   printf("\n");
}
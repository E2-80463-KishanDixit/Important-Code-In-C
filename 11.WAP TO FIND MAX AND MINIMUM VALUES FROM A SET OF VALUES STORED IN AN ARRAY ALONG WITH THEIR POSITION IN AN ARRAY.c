//11.WAP TO FIND MAX AND MINIMUM VALUES FROM A SET OF VALUES STORED IN AN ARRAY ALONG WITH THEIR POSITION IN AN ARRAY
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,j,n,eMIN=0,eMAX=0;
    printf("enter count of array\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

  
    i=0;
    eMIN=i;
     for(j=i+1;j<n;j++)
     {
        if(a[eMIN]>a[j])
        {
            eMIN=j;
        }
     }
    printf("minimum element of array %d and its position is %d and its index number is %d\n",a[eMIN],eMIN+1,eMIN);


     i=0;
    eMAX=i;
     for(j=i+1;j<n;j++)
     {
        if(a[eMAX]<a[j])
        {
            eMAX=j;
        }
     }
    printf("maximum element of array %d and its position is %d and its index number is %d\n",a[eMAX],eMAX+1,eMAX);
}


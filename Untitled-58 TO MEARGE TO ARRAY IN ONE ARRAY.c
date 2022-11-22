//TO MEARGE TO ARRAY IN ONE ARRAY
#include<stdio.h>
int main()
{
    int i,j,temp=0,asize=0,bsize=0,csize=0;
    printf("count of element in first array\n");
    scanf("%d",&asize);

    printf("count of element in second array\n");
    scanf("%d",&bsize);

    int a[asize],b[bsize];
    csize=asize+bsize;
    int c[csize];
   // printf("%d",csize);

    printf("enter your element of first array\n");
    for(i=0;i<asize;i++)
    scanf("%d",&a[i]);

    printf("enter element of second array\n");
    for(i=0;i<bsize;i++)
    scanf("%d",&b[i]);

    for(i=0;i<asize;i++)
    c[i]=a[i];

    for(i=0;i<bsize;i++)
    {
    c[asize+i]=b[i];
    }

    printf("your array befor shorting\n");
    
    for(i=0;i<csize;i++)
    printf("%d ",c[i]);

    printf("\nyour array after shorting\n");

    for(i=0;i<csize;i++)
    {
        for(j=0;j<csize;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
                
            }  
          
        }
         
    }
    for(i=0;i<csize;i++)
    {
     printf("%d ",c[i]);
    }  
}
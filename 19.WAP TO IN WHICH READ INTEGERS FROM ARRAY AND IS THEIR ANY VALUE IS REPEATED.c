//19.WAP TO IN WHICH READ INTEGERS FROM ARRAY AND IS THEIR ANY VALUE IS REPEATED
#include<stdio.h>
#define MAX 20
int main()
{
    int a[MAX];
 
    int i,j,n,frq;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter integers\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    i=0;frq=1;
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
          {
           frq++;
          }
        }
        
    }

    if(frq!=1)
    {
     printf("here number is repeated");
    }
    else
    {
    printf("no duplicate number is present");
    }
}
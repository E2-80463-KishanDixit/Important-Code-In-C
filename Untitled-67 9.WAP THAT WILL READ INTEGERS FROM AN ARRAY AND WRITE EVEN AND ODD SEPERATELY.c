//9.WAP THAT WILL READ INTEGERS FROM AN ARRAY AND WRITE EVEN AND ODD SEPERATELY
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX];
    int i,n;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    //printf("even integers\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("even: %d\n",a[i]);
        }
        else
        {
            printf("odd: %d\n",a[i]);
        }
    }

    


}
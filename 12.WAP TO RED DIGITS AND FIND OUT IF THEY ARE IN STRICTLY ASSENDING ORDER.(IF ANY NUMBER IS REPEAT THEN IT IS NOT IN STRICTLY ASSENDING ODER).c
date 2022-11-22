//12.WAP TO RED DIGITS AND FIND OUT IF THEY ARE IN STRICTLY ASSENDING ORDER.(IF ANY NUMBER IS REPEAT THEN IT IS NOT IN STRICTLY ASSENDING ODER)
#include<stdio.h>
#define MAX 60
int main()
{
    int a[MAX];
    int i,j,n,ref,r=0;
    printf("enter count of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        //USING INSERTION SORT ALGO
    printf("assending order of numbers\n");
    for(i=1;i<n;i++)
    {
        ref=a[i];
        j=i-1;
        while(j>=0&&ref<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=ref;
    }
        
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            r=1;
            break;
        }
       
    }
    if(r==1)
    {
        printf("\nnumbers are not in strictely assending order\n");
    }
    else
    {
        printf("numbers are in strictly assending order\n");
    }
    
}
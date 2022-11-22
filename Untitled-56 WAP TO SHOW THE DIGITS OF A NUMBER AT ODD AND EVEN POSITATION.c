//WAP TO SHOW THE DIGITS OF A NUMBER AT ODD AND EVEN POSITATION 
#include<stdio.h>
int main()
{
    int i,cnt,p=0;
    printf("enter count of digits in your number \n");
    scanf("%d",&cnt);
    int arr[cnt];
    printf("enter your number :\n");
    for(i=0;i<=cnt;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
     printf("your number is:");
    for(i=0;i<=cnt;i++)
    {
    printf("%d",arr[i]);
    }
    printf("\n");
    printf("digits of even place:\n");
    for(i=0;i<=cnt;i++)
    {
        p=2*i;
        if(p<=cnt)
        {
           printf("even :%d\n",arr[p]);
        }
    }
          printf("\n");
        
     printf("digits at odd place:\n");
       for(i=0;i<=cnt;i++)
        {
        p=2*i-1;
        if(p<=cnt)
        {
        printf("odd :%d\n",arr[p]);
        }
        }

}
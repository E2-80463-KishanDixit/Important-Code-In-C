//WAP TO ARRANGE RANDOM REPEATED NUMBER ACCORDING TO FREQUENY
#include<stdio.h>
#define MAX 50
int main() 
{
    int arr[MAX];
    int i,j,count,p,frq=1,k=1,temp=0;
    printf("enter count of digites\n ");
    scanf("%d",&p);//DETERMINE THE SIZE LIMIT OF ARRAY
    printf("enter your number\n");
    for(i=0;i<p;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
         if(arr[j]>arr[j+1]) //SWAPING OF NUMBERS
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }    
        }
    }
    for(i=0;i<p;i++)
    {
    printf("%d",arr[i]);
    }                          //FINAL NUMBER IN INCREASING ORDER
    
        for(j=0;j<p;j++)            //TO FIND FREQUENCY OF EACH DIGIT
        {
        if(arr[j]==arr[j+1])
        {
            frq++;
            k=frq;  
        }
        if(arr[j]!=arr[j+1])
        { 
            printf("\nfrequency of %d is %d\n",arr[j],k);    
          frq=1;
          k=1;  
        }
    
        }  
      
}


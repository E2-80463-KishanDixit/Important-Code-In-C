// WAP TO FIND THAT A ANY DIGIT IN A NUMBER IS REPEAT OR NOT
#include<stdio.h>
int main()
{
    int seen[10]={0};
    int a,n;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
       if(seen[a]==1)
       break;
       seen[a]=1;
       n=n/10;
    }
    if(n>0)
    printf("yes");
    else
    printf("no");
}
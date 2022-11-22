//TO FIND SQURE OF A NUMBER USING FUNCTION
#include<stdio.h>
int main()
{
    
    int a,rlt;
    int sqr(void);
    void sqr2(void);
    printf("enter a choice:\n 1.squre  of a number\n2.series of squre\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:rlt=sqr();
    printf("%d",rlt);
    break;
    case 2:sqr2();
    break;
    default:printf("enter right choice\n");
    }
    main();
}
int sqr()
{
    int p,q;
    printf("enter a number\n");
    scanf("%d\n",&p);
    q=p*p;
    return q;
}
void sqr2()
{
    int i,j,k=1;
    printf("enter a number\n");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
    k=i*i;
    printf("%d=%d\n",i,k);
    }
}


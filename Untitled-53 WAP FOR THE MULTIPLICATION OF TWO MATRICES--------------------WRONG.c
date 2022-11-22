// WAP FOR THE MULTIPLICATION OF TWO MATRICES--------------------WRONG
#include<stdio.h>
#define max 50
int main()
{
    int i,j,k,l,p,q,r,s,sum=0;
    int a[max][max];
    int b[max][max];
    int c[max][max];
    printf("enter row and column :\nfor first matrix :\n");
    scanf("%d%d",&p,&q);
    printf("enter element for first matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("enter row and column :\n for second matrix");
    scanf("%d %d",&r,&s);
     if(q!=r)
    {
        printf("enter valid rows and column");
    }
    else
    {
    printf("enter element for second matrix\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<s;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<s;j++)
        {
            for(k=0;k<r;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }

}
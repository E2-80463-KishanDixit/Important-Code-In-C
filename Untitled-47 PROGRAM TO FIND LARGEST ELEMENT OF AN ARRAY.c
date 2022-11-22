//PROGRAM TO FIND LARGEST ELEMENT OF AN ARRAY
#include<stdio.h>
int main()
{
    int a[5];
      int i,j,c;
    printf("enter 5 enteries\n");
    for(j=0;j<5;j++)
    scanf("%d",&a[j]);
    c=a[0];
    //b=a[0];
    for(i=1;i<5;i++)
    {
    if(a[i]>c)
    {
        c=a[i];

    }
    }
    printf("%d is gratest number",c);

}
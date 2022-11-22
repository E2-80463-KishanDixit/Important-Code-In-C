//PRINT THE REVERSE OF THE GIVIN SERIES 
#include<stdio.h>
int main()
{
  int a[9]={45,45,89,67,34,56,78,23,90};
  int i;
    for(i=0;i<9;i++)
    printf("%d\n",a[i]);
    for(i=8;i>=0;i--)
    printf("%d\n",a[i]);
}
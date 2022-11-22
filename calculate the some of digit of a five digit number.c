//calculate the some of digit of a five digit number
#include<stdio.h>
main()
{
     int digiadd;
    int digi1,digi2,digi3,digi4,digi5,gadd=0;
    printf("enter five digit number");
    scanf("%d",&digiadd);
    digi1=digiadd%10;
    digiadd=digiadd/10;
    digi2=digiadd%10;
    digiadd=digiadd/10;
    digi3=digiadd%10;
    digiadd=digiadd/10;
    digi4=digiadd%10;
    digiadd=digiadd/10;
    digi5=digiadd%10;
    gadd=digi1+digi2+digi3+digi4+digi5;
    printf("to total addition of digits:%d",gadd);
}
//count num of notes of given amount
#include<stdio.h>
 int main()
{
int amt,note,cnt;
printf("enter your amount\n");
scanf("%d",&amt);
printf("choose type of notes:  10\n20\n50\n100\n500\n2000\n");
scanf("%d",&note);
cnt=amt/note;
if(amt<note)
printf("choose right type of notes  choice");
else
printf("count of notes is %d",cnt);
}
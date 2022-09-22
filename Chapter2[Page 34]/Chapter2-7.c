#include<stdio.h>
int main(void)
{
int money, bill20,bill10,bill5,bill1;
printf("Enter a dollar amount : ");
scanf("%d",&money);
bill20= money/20;
bill10= (money-20*bill20)/10;
bill5= (money-20*bill20-10*bill10)/5;
bill1= (money-20*bill20-10*bill10-5*bill5)/1;
printf("$20 bills: %d\n",bill20);
printf("$10 bills: %d\n",bill10);
printf(" $5 bills: %d\n",bill5);
printf(" $1 bills: %d\n",bill1);
return 0;
}
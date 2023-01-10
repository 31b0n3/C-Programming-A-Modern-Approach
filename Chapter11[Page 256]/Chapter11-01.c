#include<stdio.h>
void pay_amount(int dollars, int *twenties, int *tens,int *fives, int *ones);
int main(void)
{
int money, bill20,bill10,bill5,bill1;
printf("Enter a dollar amount : ");
scanf("%d",&money);
pay_amount(money, &bill20, &bill10, &bill5, &bill1);
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
void pay_amount(int dollars, int *twenties, int *tens,int *fives, int *ones)
{
*twenties = dollars /20;
*tens= dollars %20 /10;
*fives= dollars % 20 % 10 /5;
*ones= dollars % 20 % 10 % 5 /1;
}
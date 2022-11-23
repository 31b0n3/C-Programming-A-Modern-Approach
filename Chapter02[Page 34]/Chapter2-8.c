#include<stdio.h>
int main(void)
{
double loan,rate,pay,first,second,third;
printf("Enter amount of loan : ");
scanf("%lf",&loan);
printf("\nEnter interest rate : ");
scanf("%lf",&rate);
printf("\nEnter monthly payment :");
scanf("%lf",&pay);
first= loan+ (rate/1200*loan)-386.66;
second= first+ (rate/1200*first)-386.66;
third= second+(rate/1200*second)-386.66;
printf("Balance remaining after first payment: $%.2lf\n",first);
printf("Balance remaining after second payment: $%.2lf\n",second);
printf("Balance remaining after third payment: $%.2lf\n",third);
return 0;
}
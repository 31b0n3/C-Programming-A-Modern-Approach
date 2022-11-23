#include<stdio.h>
int main(void)
{
double loan,rate,pay,percent,nup;
printf("Enter amount of loan : ");
scanf("%lf",&loan);
printf("\nEnter interest rate : ");
scanf("%lf",&rate);
printf("\nEnter monthly payment :");
scanf("%lf",&pay);
printf("Enter the number of payments: ");
scanf("%lf", &nup);
percent = rate /1200;
  for (int i = 0; i < nup; ++i) {
    loan = loan * (1 + percent) - pay;
    printf("Remaining balance after monthly installments %d: %.2f\n", i + 1, loan);
  }
return 0;
}
#include <stdio.h>

int main() {
int income;
double tax;
printf("Enter the amount of taxable income: ");
scanf("%d", &income);
if (income < 750)
{
  tax = income/100;
}
else if (income>= 750 && income <= 2250)
{
  tax =  7.50 + income/100 * 2;
}
else if (income> 2250 && income <= 3750)
{
  tax =  37.50 + income/100 * 3;
}
else if (income> 3750 && income <= 5250)
{
  tax =  82.50 + income/100 * 4;
}
else if (income> 5250 && income <= 7000)
{
  tax =  142.50 + income/100 * 5;
}
else if (income>7000)
{
  tax =  230.00 + income/100 * 6;
}
printf ("Tax due: $%.2lf",tax);

  return 0;
}
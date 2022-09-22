#include<stdio.h>
int main(void)
{
double  money,tax;
printf("Enter an amount : ");
scanf("%lf",&money);
tax= money/100*5;
printf("\nWith tax added : %.2lf", money+tax);
    return 0;
}
#include<stdio.h>
int main(void)
{
int n,d1,d2;
printf("Enter a two-digit number: ");
scanf("%d", &n);
d1 = n / 10;
d2 = n % 10;
printf("The reversal is: %d%d", d2,d1);
return 0;
}
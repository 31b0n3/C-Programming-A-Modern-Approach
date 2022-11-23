#include<stdio.h>
int main(void)
{
int n,d1,d2,d3,d23;
printf("Enter a two-digit number: ");
scanf("%d", &n);
d1 = n / 100;
d23 = n % 100;
d2 = d23 /10;
d3 = d23 % 10;
printf("The reversal is: %d%d%d",d3, d2,d1);
return 0;
}
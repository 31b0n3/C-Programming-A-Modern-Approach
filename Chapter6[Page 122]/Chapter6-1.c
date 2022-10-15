#include<stdio.h>
int main(void)
{
double a,b=0;
do
{
    printf("Enter a number:");
    scanf("%lf", &a);
    if (a <= 0)
        goto L1;
    
    if (a > b)
        b = a;
} while (a != 0);
L1:
printf ("The largest number entered was: %.2lf",b);
return 0;
}
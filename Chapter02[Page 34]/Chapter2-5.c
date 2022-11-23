#include<stdio.h>
int main(void)
{
double x;
printf("enter a value for x : ");
scanf("%lf",&x);
printf("polynomial = %lf", 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6);
return 0;
}
#include<stdio.h>
int main(void)
{
double x;
printf("enter a value for x : ");
scanf("%lf",&x);
printf("polynomial = %lf", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
return 0;
}
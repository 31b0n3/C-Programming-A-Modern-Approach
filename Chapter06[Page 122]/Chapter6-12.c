#include<stdio.h>
int main(void)
{
int i = 2;
double e = 2, q=2,eps;
printf("eps = ");
scanf("%d",&eps);
while (1/q>eps)
{
    
    e += 1/q;
    ++i;
    q *= i;
    
}
printf("e = %f\n", e);
return 0; 
}
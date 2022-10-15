#include<stdio.h>
int main(void)
{
int n;
double e = 1, q=1;
printf("n = ");
scanf("%d",&n);
for (int i = 1; i<= n;i++)
{
    q *= i;
    e += 1/q;
}
printf("e = %f\n", e);
return 0; 
}



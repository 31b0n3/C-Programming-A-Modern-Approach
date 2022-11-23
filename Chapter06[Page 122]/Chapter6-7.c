#include <stdio.h>

int main(void)

{ 
int i, n,m,sqrt;

printf("This program prints a table of squares.\n"); 
printf("Enter number of entries in table: "); 
scanf("%d", &n);
m = 3;
  for (i = 1, sqrt = 1; i <= n; m += 2, ++i) 
{
    printf("%10d%10d\n", i, sqrt);
    sqrt += m;
}
return 0;
}

#include<stdio.h>

long power(int x, int n) {
  if (n == 0) {
    return 1;
  }
  if (n % 2 == 0 && n > 2)
  {
    power(power(x, n/2),n/2);
  }
  return x * power(x, n - 1);
}
int main()
{
    int x;
    printf("X = ");
    scanf("%d",&x);
    int n;
    printf("n = ");
    scanf("%d",&n);
    printf("X power n = %ld",power(x,n));
}

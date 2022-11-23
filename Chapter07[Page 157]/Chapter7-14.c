#include <stdio.h>
#include <math.h>

int main() {
  float x, y = 1,quotient,ao,y2;
  const float k = 0.00001;
  printf("Enter a positive number: ");
  scanf("%f", &x);
  for (;;) {
     quotient = x/y;
     ao = (y + quotient)/2;
     y2 = y;
     y = ao;
    if (fabs(y2 - ao) < k * y2) {
      break;
    }
    // fabs() to computing absolute value 
  }
  printf("Square root: %.5f\n", y);
  return 0;
}
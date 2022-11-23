#include <stdio.h>

int main() {
  float n1, n2 = 0;
  char c1 = ' ', c2;
  printf("Enter an expression: ");
  do {
    scanf("%f%c", &n1, &c2);
    switch (c1) {
      case '+': n2 += n1;
        break;
      case '-': n2 -= n1;
        break;
      case '*': n2 *= n1;
        break;
      case '/': n2 /= n1;
        break;
      case ' ': n2 = n1;
        break;
    }
    c1 = c2;
  }while (c2 != '\n');
  printf("Value of expression: %.1f\n", n2);
  return 0;
}
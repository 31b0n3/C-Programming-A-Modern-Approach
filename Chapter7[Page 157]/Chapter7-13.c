#include <stdio.h>

int main() {
  int ch;
  float n = 0, length = 0, sum = 0;
  printf("Enter a sentence: ");
  do {
    ch = getchar();
    if (ch == '\n' || ch == ' ') {
      if (length > 0) {
        sum += length;
        ++n;
        length = 0;
      }
    } else {
      ++length;
    }

  }while (ch != '\n');
  if (n > 0) {
    printf("Average word length: %.1f\n", sum/n);
  }
  return 0;
}
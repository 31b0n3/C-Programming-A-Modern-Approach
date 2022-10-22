#include <stdio.h>
int main() {
  printf("Enter a first and lastname: ");
  char ch, st = getchar();
  int last = 0;
  do {
    ch = getchar();
    if (ch == '\n')
    {
        break;
    }
    if (ch == ' ') {
      last = 1;
      continue;
    }
    if (last) {
      printf("%c", ch);
    }
  }while (ch != '\n');
  printf(", %c.", st);
  return 0;
}
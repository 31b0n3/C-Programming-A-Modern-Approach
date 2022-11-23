#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Enter a sentence: ");
  int vowels = 0;
  do {
    ch = getchar();
    ch = toupper(ch);
    switch (ch) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        ++vowels;
        break;
    }
  }while (ch != '\n');
  printf("Your sentence contains %d vowels\n", vowels);
  return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Enter a word: ");
  int sum = 0;
  do {
    ch = toupper(getchar());
    switch (ch) {
      case 'A':
      case 'E':
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
        sum += 1;
        break;
      case 'D':
      case 'G':
        sum += 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        sum += 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        sum += 4;
        break;
      case 'K':
        sum += 5;
        break;
      case 'J':
      case 'X':
        sum += 8;
        break;
      case 'Q':
      case 'Z':
        sum += 10;
        break;
    }
  }while(ch != '\n');
  printf("Scrabble value: %d\n", sum);
  return 0;
}
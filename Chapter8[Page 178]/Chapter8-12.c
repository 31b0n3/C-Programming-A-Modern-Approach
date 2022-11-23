#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf("Enter a word: ");
  int sum = 0, a[1000],b=0;
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
        a[b++]=1;
        break;
      case 'D':
      case 'G':
        a[b++]=2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        a[b++]=3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        a[b++]=4;
        break;
      case 'K':
        a[b++]=5;
        break;
      case 'J':
      case 'X':
        a[b++]=8;
        break;
      case 'Q':
      case 'Z':
        a[b++]=9;
        break;
    }
  }while(ch != '\n');
  for(int i = 0; i<b;i++)
  {
    sum += a[i];
  }
  printf("Scrabble value: %d\n", sum);
  return 0;
}
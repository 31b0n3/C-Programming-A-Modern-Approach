#include <stdio.h>
int main() {
  printf("Enter a first and lastname: ");
  char ch, st = getchar();
  char a[20];
  int last = 0,b=0;
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
      a[b++]= ch;
    }
  }while (ch != '\n');
  printf("You entered the name: ");
  for (int i =0; i<b;i++)
  {
    printf("%c",a[i]);
  }
  printf(", %c.", st);
  return 0;
}
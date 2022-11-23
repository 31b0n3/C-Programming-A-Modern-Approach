#include <stdio.h>
int main (void)
{
    printf("Enter phone number: ");
    char ch[15];
    for (int i = 0; i< 15; i++)
    {
        scanf("%c",&ch[i]);
    }
    for (int i = 0; i< 15; i++)
    {
        switch (ch[i]) {
      case 'A':
      case 'B':
      case 'C':
        ch[i] = '2';
        break;
      case 'D':
      case 'E':
      case 'F':
        ch[i] = '3';
        break;
      case 'G':
      case 'H':
      case 'I':
        ch[i] = '4';
        break;
      case 'J':
      case 'K':
      case 'L':
        ch[i] = '5';
        break;
      case 'M':
      case 'N':
      case 'O':
        ch[i] = '6';
        break;
      case 'P':
      case 'R':
      case 'S':
        ch[i] = '7';
        break;
      case 'T':
      case 'U':
      case 'V':
        ch[i] = '8';
        break;
      case 'W':
      case 'X':
      case 'Y':
        ch[i] = '9';
        break;
    }
    }
    printf("In numberic form: ");
    for (int i = 0; i< 15; i++)
    {
        printf("%c",ch[i]);
    }
return 0;
}
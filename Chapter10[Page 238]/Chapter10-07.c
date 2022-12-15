#include<stdio.h>
#include<ctype.h>
#define MAX_DIGITS 10
char segments[10][4][4] =
    { { {' ', '_', ' ', ' '},
        {'|', ' ', '|', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 0
      { {' ', ' ', ' ', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 1
      { {' ', '_', ' ', ' '},
        {' ', '_', '|', ' '},
        {'|', '_', ' ', ' '},
        {' ', ' ', ' ', ' '} },
        // 2
      { {' ', '_', ' ', ' '},
        {' ', '_', '|', ' '},
        {' ', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 3
      { {' ', ' ', ' ', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 4
      { {' ', '_', ' ', ' '},
        {'|', '_', ' ', ' '},
        {' ', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 5
      { {' ', '_', ' ', ' '},
        {'|', '_', ' ', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 6
      { {' ', '_', ' ', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 7
      { {' ', '_', ' ', ' '},
        {'|', '_', '|', ' '},
        {'|', '_', '|', ' '},
        {' ', ' ', ' ', ' '} },
        // 8
      { {' ', '_', ' ', ' '},
        {'|', '_', '|', ' '},
        {' ', '_', '|', ' '},
        {' ', ' ', ' ', ' '} }
        // 9
    };
char digits[4][MAX_DIGITS*4];
void clear_digits_array(void)
{
  for (int i = 0; i < 4; i++) 
    for (int j = 0; j < MAX_DIGITS * 4; j++) 
    {
      digits[i][j] = ' ';
    }
}
void process_digit(int digit, int position)
{
  int start = position * 4;
  for (int i = 0; i < 4; i++ )
    for(int j = 0; j < 4; j++)
    {
      digits[i][start + j] = segments[digit][i][j];
    }
}
void print_digits_array(void)
{
  for (int i = 0; i < 4; i++) 
  {
    for (int j = 0; j < MAX_DIGITS * 4; j++) 
    {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}
int main() {
  clear_digits_array();
  char ch;
  int count = 0;
  printf("Enter a number: ");
  for (;;) 
  {
    ch = getchar();
    if (ch == '\n') 
    {
      break;
    }
    if (count >= MAX_DIGITS) 
    {
      break;
    }
    if (isdigit(ch)) 
    {
      process_digit(ch - '0', count);
      ++count;
    }
  }
  print_digits_array();
  return 0;
}
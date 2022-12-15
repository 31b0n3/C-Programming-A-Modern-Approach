#include<stdio.h>
#include <stdbool.h>   /* C99 */
#include<stdlib.h>
#define STACK_SIZE 100

//External variables
int contents[STACK_SIZE];
int top = 0;
void stack_overflow( ){

  printf("\nExpression is too complex");
  exit(0);
}
void stack_underflow()
{
  printf("\nNot enough operands in expression");
  exit(0);

}
void make_empty(void) {
  for(int i= 0; i<100 ; i++)
  {
  contents[i]=0;
  }
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int n) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = n;
  }
}

int pop(char ch) {
  if (is_empty()) {
    stack_underflow();
  } else {
    switch(ch){
      case '+': contents[top-2]= contents[top-2] + contents[--top]; break;
      case '-': contents[top-2]= contents[top-2] - contents[--top]; break;
      case '*': contents[top-2]= contents[top-2] * contents[--top]; break;
      case '/': contents[top-2]= contents[top-2] / contents[--top]; break;
      case '=': break;
    }
    return;
  }
}
int main ()
{
  char ch;
  for(;;)
  {
  printf("Enter an RPN expression: ");
  do
  {
    scanf(" %c", &ch); 
      if (ch - '0' >= 0 && ch - '0' <= 10) 
    { 
      push(ch - '0');
    }
    
    else if (ch == '+' || ch == '-' ||ch == '*' || ch == '/')
    {
      pop(ch);
    }
    else if (ch == '=')
    {
      pop(ch);
      printf("Value of expression: %d",contents[0]);
      printf("\n");
      make_empty();
      break;
    }
    else if (ch != ' ')exit(0);
  } while (true);
  }
}
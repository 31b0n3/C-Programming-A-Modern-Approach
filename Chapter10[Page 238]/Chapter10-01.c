#include<stdio.h>
#include <stdbool.h>   /* C99 */
#include<stdlib.h>
#define STACK_SIZE 100

//External variables
int contents[STACK_SIZE];
int top = 0;
void stack_overflow( ){

  printf("\nStack overflow");
  exit(0);
}
void stack_underflow()
{
  printf("\nParentheses/braces aren't nested properly");
  exit(0);

}
void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}
int main ()
{
  char bracket,bracketch;
  printf("Enter parentheses and/or braces: ");
  do
  {
    bracket = getchar();
    if(bracket == '\n')
    {
      if(is_empty())
      {
        printf("\nParentheses/braces are nested properly");
        exit(0);
      }
      break;
    }
    if(bracket == '{' || bracket == '(') push(bracket);
    if(bracket == '}' || bracket == ')') 
    {
      bracketch = pop();
      if (bracket == ')'&& bracketch != '('  ||  bracket == '}'&& bracketch != '{' )
      {
        printf("\nParentheses/braces aren't nested properly");
        exit(0);
      }
      
    }
  } while (true);

}
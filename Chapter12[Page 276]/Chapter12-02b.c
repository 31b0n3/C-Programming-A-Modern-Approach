#include<stdio.h>
#include<ctype.h>
int main()
{
char a[100],*p;
int end = 0;
   printf("Enter a message: ");
   for (p = &a[0]; p < &a[100]; p++)
    {
        *p = getchar();
        if(*p == '\n')
        {
            break;
        }
        end++;
         *p = tolower(*p);
        if(*p <= 'z'&& *p >= 'a');
        else 
        {
            p--;
            end--;
        }

    }
char *j = &a[end-1];
int count = 1;
    for (p = &a[0]; p < &a[end - 1]; p++)
    {
        if (*p ==*j) j--;
        else count = 0;
    }
    if(count) printf("Palindrome");
    else      printf("Not a palindrome");

    return 0;
}
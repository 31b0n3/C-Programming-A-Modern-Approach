#include<stdio.h>
#include<ctype.h>
int main()
{
char a[100];
int end;
   printf("Enter a message: ");
   for (int i = 0; i < 100; i++)
    {
        a[i] = getchar();
        if(a[i]== '\n')
        {
            end = i-1;
            break;
        }
         a[i] = tolower(a[i]);
        if(a[i] <= 'z'&&a[i]>= 'a');
        else i--;

    }
int j = end, count = 1;
    for (int i = 0; i <= end; i++)
    {
        if (a[i]==a[j]) j--;
        else count = 0;
    }
    if(count) printf("Palindrome");
    else      printf("Not a palindrome");

    return 0;
}
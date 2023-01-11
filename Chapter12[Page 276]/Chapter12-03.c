#include<stdio.h>
int main()
{
char a[100],*p;
int end = 0;
   printf("Enter a message: ");
   for (p = a; p < a + 100; p++)
    {
        *p = getchar();
        if(*p == '\n')
        {
            break;
        }
        end++;
    }
    printf("Reversal is: ");
    for(p = a + end - 1; p >= a; p--)
    {
        printf("%c",*p);
    }

    return 0;
}
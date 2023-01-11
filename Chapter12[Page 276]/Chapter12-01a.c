#include<stdio.h>
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
    }
    printf("Reversal is: ");
    for(int i = end; i >= 0; i--)
    {
        printf("%c",a[i]);
    }

    return 0;
}
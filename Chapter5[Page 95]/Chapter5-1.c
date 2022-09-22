#include<stdio.h>
int main(void)
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(n>=0&&n<=9)
{
    printf("The number %d has 1 digits", n);
}
else if(n>=10&&n<=99)
{
    printf("The number %d has 2 digits", n);
}
else if(n>=100&&n<=999)
{
    printf("The number %d has 3 digits", n);
}
else if(n>=1000&&n<=9999)
{
    printf("The number %d has 4 digits", n);
}
return 0;
}

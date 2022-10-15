#include<stdio.h>
int main(void)
{
long  n ;
printf("Enter a  number: ");
scanf("%d", &n);
for (long i=1;i<=n/2;i++)
{
    if (i%2==0)
    {
        if (i*i<=n)
        {
            printf("%d\n",i*i);
        }
    }
}
return 0;
}
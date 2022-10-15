#include<stdio.h>
int main(void)
{
int a, b,c,d,e,q;
printf ("Enter a fraction: ");
scanf ("%d/%d", &a, &b);
c = a;
d = b;
if (a < b)
{
    e = a ;
    a = b ;
    b = e ;
}
if (b == 0)
{
printf ("In lowest terms: %d/%d", c/a,d/a);
}
else
{
    do
    {
        q = a % b;
        a = b ;
        b = q;
    } while (b!=0);
printf ("In lowest terms: %d/%d", c/a,d/a);   
}
return 0;
}
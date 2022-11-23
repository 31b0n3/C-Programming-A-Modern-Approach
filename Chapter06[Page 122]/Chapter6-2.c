#include<stdio.h>
int main(void)
{
int m,n,e,q;
printf ("Enter two integers: ");
scanf ("%d %d", &m,&n);
if (m < n)
{
    e = m ;
    m = n ;
    n = e ;
}
if (n == 0)
{
printf("Greatest common divisor: %d",m);
}
else
{
    do
    {
        q = m % n;
        m = n ;
        n = q;
    } while (n!=0);
printf("Greatest common divisor: %d",m);    
}
return 0;
}
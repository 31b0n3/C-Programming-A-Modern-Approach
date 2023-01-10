#include<stdio.h>
void reduce(int numerator, int denominator,int *reduced_numerator, int *reduced_denominator);
int main(void)
{
int a, b,num,den;
do
{
printf ("Enter a fraction: ");
scanf ("%d/%d", &a, &b);
if (b == 0)
{
printf("invalid fraction\n");
}
}
while(b==0);
reduce(a,b,&num,&den);
printf ("In lowest terms: %d/%d", num,den);
return 0;
}
void reduce(int numerator, int denominator,int *reduced_numerator, int *reduced_denominator)
{
int c = numerator;
int d = denominator;
int e,q;
if (numerator < denominator)
{
    e = numerator ;
    numerator = denominator ;
    denominator = e ;
}
if (denominator == 0)
{
*reduced_numerator = c/numerator;
*reduced_denominator = d/numerator;
}
else
{
    do
    {
        q = numerator % denominator;
        numerator = denominator ;
        denominator = q;
    } while (denominator!=0);
*reduced_numerator = c/numerator;
*reduced_denominator = d/numerator;  
}
}
#include<stdio.h>
int main(void)
{
unsigned long n,d1 ;
printf("Enter a  number: ");
scanf("%d", &n);
printf("The reversal is: ");
do
{ 
d1 = n % 10;
n /= 10;
printf("%d", d1);   
} 
while (n!=0);
return 0;
}
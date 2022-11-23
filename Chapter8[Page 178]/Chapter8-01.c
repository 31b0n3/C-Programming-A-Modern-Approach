#include <stdbool.h> 
#include <stdio.h>

int main(void)
{
 bool digit_seen [10] = {false};    
int a[10];
int digit;
long n; 

int b = 0;
a[10] = 101;
printf("Enter a number: "); 
scanf("%ld", &n);
while (n > 0) { 
    digit = n % 10; 
    if (digit_seen [digit]) 
    {
        if (digit == 0)
        {
            a[10] = digit; 
        }
        else{
        a[digit] = digit;
        b++;
        }
       
    }
    digit_seen [digit] = true; 
    n /= 10;
}
if (b > 0) {
    printf("Repeated digit(s): "); 
    for (int i=1;i<=10;i++ )
    {
        if(a[i] < 10&& a[i] >=0)
        {
            printf(" %d",a[i]);
        }
    }
}
else 
    printf("No repeated digit\n");
return 0;
}
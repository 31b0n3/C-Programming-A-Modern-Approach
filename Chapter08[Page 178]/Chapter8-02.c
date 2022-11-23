#include <stdbool.h> 
#include <stdio.h>

int main(void)
{
bool digit_seen [10] = {false}; 
int a[10] ={0};
int digit;
long n; 
printf("Enter a number: "); 
scanf("%ld", &n);
while (n > 0) { 
    digit = n % 10; 
    a[digit]++;
    n /= 10;
}
printf("Digit:            ");
for(int i = 0; i<10; i++)
{
    printf("%d   ",i);
}
printf("\nOccurrences:      ");
for(int i =0; i< 10; i++)
{
    printf("%d   ",a[i]);
}
return 0;
}
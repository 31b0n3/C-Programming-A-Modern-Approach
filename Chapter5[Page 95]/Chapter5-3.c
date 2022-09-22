#include <stdio.h>

int main(void) 
{
float commission, value,n,pps,centtodollar;

printf("Enter the number of shares: "); 
scanf("%f", &n);
printf("Enter the price per share: ");
scanf("%f",&pps);
value = n * pps;

if (value < 2500.00f)
    commission = 30.00f + .017f * value;
else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
else if (value < 20000.00f)
    commission = 76.00f + .0034f * value; 
else if (value < 50000.00f)
    commission = 100.00f +.0022f * value;
else if (value < 500000.00f) 
    commission = 155.00f + .0011f * value;
else 
    commission = 255.00f +.0009f * value;

if (commission < 39.00f) 
    commission= 39.00f;

printf("Commission charged by original broker: $%.2f\n", commission);
if (n<2000)
{
    centtodollar = (n * 3)*1/100; //1 cent = 1/100 dollar
    commission = 33.00f + centtodollar;
}
else if (n>=2000)
{
     centtodollar = (n * 2)*1/100;
    commission = 33.00f + centtodollar;   
}
printf("Commission charged by a rival broker: $%.2f\n", commission);
return 0;
}
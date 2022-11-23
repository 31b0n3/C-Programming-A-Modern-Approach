#include<stdio.h>
int main(void)
{
int item,mm,dd,yyyy;
double price;
printf("Enter item number: ");
scanf("%d",&item);
printf("Enter unit price: ");
scanf("%lf",&price);
printf("Enter purchase date (mm/dd/yyyy) : ") ;
scanf("%d/%d/%d", &mm,&dd,&yyyy);

printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t%.2lf\t%-d/%d/%d",item,price,mm,dd,yyyy);
return 0;
}

#include<stdio.h>
int main()
{
int mm,dd,yyyy;
printf("Enter a date (mm/dd/yyyy): ");
scanf("%d/%d/%d",&mm,&dd,&yyyy);
printf ("You entered the date %d%.2d%.2d",yyyy,mm,dd);
return 0;
}
#include<stdio.h>
int main(void)
{
int hour,minute;
printf("Enter a 24-hour time: ");
scanf("%d:%d",&hour,&minute);
if(hour<12)
{
    printf("Equivalent 12-hour time: %d:%.2d AM", hour,minute);
}
else if (hour==12)
{
   printf("Equivalent 12-hour time: %d:%.2d PM", hour,minute); 
}
else if (hour>12) 
{
    printf("Equivalent 12-hour time: %d:%.2d PM", hour-12,minute);
}
else if (hour==0)
{
    printf("Equivalent 12-hour time: %d:%.2d AM", hour,minute);
}
return 0;
}
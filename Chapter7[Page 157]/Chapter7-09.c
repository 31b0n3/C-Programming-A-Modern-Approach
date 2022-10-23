#include<stdio.h>
#include <ctype.h>
int main(void)
{
int hours,minutes;
char ap;
printf("Enter a 12-hour time: ");
scanf("%d:%d %c",&hours,&minutes,&ap);
ap = toupper(ap);
if (hours == 12)
{
    hours = ap == 'P'?12:0;
}
else if (ap == 'P')
{
    hours +=12;
}
printf("Equivalent 24-hour time: %.2d:%d", hours, minutes);
return 0; 

}



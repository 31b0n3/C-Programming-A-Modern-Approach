#include <stdio.h>

int main(void)

{ 
int days, dow;
printf("Enter number of days in month: ");
scanf("%d",&days);
printf("Enter starting day of week (1 = Sun, 7 = Sat): ");
scanf("%d", &dow);
switch (dow)

{
    case 2: 
    printf("         ");
    break;
    case 3:
    printf("             ");
    break;
    case 4:
    printf("                ");
    break;
    case 5:
    printf("                    ");
    break;
    case 6:
    printf("                         ");
    break;
    case 7:
    printf("                              ");
    break;      
}
for (int i = 1; i<= days;i++)
{
printf("%2d",i);
dow ++;
if (dow == 8)
{
    dow = 1;
    printf("\n");
}
else
{
    printf("   ");
}
}
return 0;
}

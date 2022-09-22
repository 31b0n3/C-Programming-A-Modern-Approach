#include<stdio.h>
int main(void)
{
int hours,minutes,x,y,
a,a1,a2,a3,a4,a5,a6,a7,a8,
b,b1,b2,b3,b4,b5,b6,b7,b8;
printf("Enter a 24-hour time: ");
scanf("%d:%d",&hours,&minutes);
x = hours * 60 + minutes;
a1 = 480;
a2 = 583;
a3 = 679;
a4 = 767;
a5 = 840;
a6 = 945;
a7 = 1140;
a8 = 1305;
b1 = 616;
b2 = 712;
b3 = 811;
b4 = 900;
b5 = 968;
b6 = 1075;
b7 = 1280;
b8 = 1438;
y = x < a1? a1 - x : x - a1;
a = a1;
b = b1;
int min = y;
y = x < a2? a2 - x : x - a2;
if (min > y)
{
    min = y;
    a = a2;
    b = b2;
}
y = x < a3? a3 - x : x - a3;
if (min > y)
{
    min = y;
    a = a3;
    b = b3;
}
y = x < a4? a4 - x : x - a4;
if (min > y)
{
    min = y;
    a = a4;
    b = b4;
}
y = x < a5? a5 - x : x - a5;
if (min > y)
{
    min = y;
    a = a5;
    b = b5;
}
y = x < a6? a6 - x : x - a6;
if (min > y)
{
    min = y;
    a = a6;
    b = b6;
}
y = x < a7? a7 - x : x - a7;
if (min > y)
{
    min = y;
    a = a7;
    b = b7;
}
y = x < a8? a8 - x : x - a8;
if (min > y)
{
    min = y;
    a = a8;
    b = b8;
}
if (a/60 > 12)
{
    printf ("Closest departure time is : %d:%.2d p.m., arriving at %d:%.2d p.m.", (a/60)-12,a%60,(b/60)-12,b%60);
}
if (a/60 == 12)
{
    printf ("Closest departure time is : %d:%.2d p.m., arriving at %d:%.2d p.m.", a/60,a%60,(b/60)-12,b%60);
}
if (a/60 < 12)
{
    if(b/60 <12)
    {
        printf ("Closest departure time is : %d:%.2d a.m., arriving at %d:%.2d a.m.",a/60,a%60,b/60,b%60);
    }
    else
    {
        printf ("Closest departure time is : %d:%.2d a.m., arriving at %d:%.2d p.m.",a/60,a%60,(b/60)-12,b%60);
    }
}
return 0; 

}



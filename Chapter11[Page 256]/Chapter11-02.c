#include<stdio.h>
void find_closest_flight(int desired_time,int *departure_time, int *arrival_time);
int main(void)
{
int hours,minutes,x,a,b;

printf("Enter a 24-hour time: ");
scanf("%d:%d",&hours,&minutes);
x = hours * 60 + minutes;
find_closest_flight(x,&a,&b);
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
void find_closest_flight(int desired_time,int *departure_time, int *arrival_time)
{
int a1,a2,a3,a4,a5,a6,a7,a8,
    b1,b2,b3,b4,b5,b6,b7,b8,
    y;
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
y = desired_time < a1? a1 - desired_time : desired_time - a1;
*departure_time = a1;
*arrival_time = b1;
int min = y;
y = desired_time < a2? a2 - desired_time : desired_time - a2;
if (min > y)
{
    min = y;
    *departure_time = a2;
    *arrival_time = b2;
}
y = desired_time < a3? a3 - desired_time : desired_time - a3;
if (min > y)
{
    min = y;
    *departure_time = a3;
    *arrival_time = b3;
}
y = desired_time < a4? a4 - desired_time : desired_time - a4;
if (min > y)
{
    min = y;
    *departure_time = a4;
    *arrival_time = b4;
}
y = desired_time < a5? a5 - desired_time : desired_time - a5;
if (min > y)
{
    min = y;
    *departure_time = a5;
    *arrival_time = b5;
}
y = desired_time < a6? a6 - desired_time : desired_time - a6;
if (min > y)
{
    min = y;
    *departure_time = a6;
    *arrival_time = b6;
}
y = desired_time < a7? a7 - desired_time : desired_time - a7;
if (min > y)
{
    min = y;
    *departure_time = a7;
    *arrival_time = b7;
}
y = desired_time < a8? a8 - desired_time : desired_time - a8;
if (min > y)
{
    min = y;
    *departure_time = a8;
    *arrival_time = b8;
}
return;
}


#include<stdio.h>
int main(void)
{
int hours,minutes,x,y,min = 1400,m,
a[8],b[8];
printf("Enter a 24-hour time: ");
scanf("%d:%d",&hours,&minutes);
x = hours * 60 + minutes;
a[0] = 480;
a[1] = 583;
a[2] = 679;
a[3] = 767;
a[4] = 840;
a[5] = 945;
a[6] = 1140;
a[7] = 1305;
b[0] = 616;
b[1] = 712;
b[2] = 811;
b[3] = 900;
b[4] = 968;
b[5] = 1075;
b[6] = 1280;
b[7] = 1438;
for(int i=0;i<8;i++)
{
y = x < a[i] ? a[i] - x : x - a[i];
if (min > y)
{
    min = y;
    m = i;
}
}
if (a[m]/60 > 12)
{
    printf ("Closest departure time is : %d:%.2d p.m., arriving at %d:%.2d p.m.", (a[m]/60)-12,a[m]%60,(b[m]/60)-12,b[m]%60);
}
if (a[m]/60 == 12)
{
    printf ("Closest departure time is : %d:%.2d p.m., arriving at %d:%.2d p.m.", a[m]/60,a[m]%60,(b[m]/60)-12,b[m]%60);
}
if (a[m]/60 < 12)
{
    if(b[m]/60 <12)
    {
        printf ("Closest departure time is : %d:%.2d a.m., arriving at %d:%.2d a.m.",a[m]/60,a[m]%60,b[m]/60,b[m]%60);
    }
    else
    {
        printf ("Closest departure time is : %d:%.2d a.m., arriving at %d:%.2d p.m.",a[m]/60,a[m]%60,(b[m]/60)-12,b[m]%60);
    }
}
return 0; 
}



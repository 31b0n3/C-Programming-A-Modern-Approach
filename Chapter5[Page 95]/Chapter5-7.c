#include<stdio.h>
int main(void)
{
int d1, d2, d3, d4,max1,max2,max, min1,min2,min;
printf("Enter four integers: ");
scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
max = d1;
min = d2;
if (d1 < d2)
{
  min1 = d1;
  max1 = d2;
}
else 
{
  min1 = d2;
  max1 = d1;
}
if (d3 < d4)
{
  min2 = d3;
  max2 = d4;
}
else
{
  min2 = d3;
  max2 = d4;
}
if (min1 < min2)
{
  min = min1;
}
else
{
  min = min2;
}
if (max1 < max2)
{
  max = max2;
}
else
{
  max = max1;
}
printf ("Largest: %d\n",max);
printf ("Smallest: %d\n",min);
return 0; 
}


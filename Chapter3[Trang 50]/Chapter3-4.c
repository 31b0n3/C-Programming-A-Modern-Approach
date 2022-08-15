#include<stdio.h>
int main(void)
{
int x1,x2,x3;
printf("Enter phone number (xxx) xxx-xxxx :");
scanf("(%d) %d-%d",&x1,&x2,&x3);
printf("You entered %.3d.%.3d.%.4d ",x1,x2,x3);
return 0;
}

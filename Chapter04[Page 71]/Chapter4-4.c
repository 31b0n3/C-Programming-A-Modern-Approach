#include<stdio.h>
int main(void)
{
int n,d1,d2,d3,d4,d5;
printf("Enter a number between 0 and 32767: ");
scanf("%d",&n);
d5=n%8;
d4=(n/8)%8;
d3=((n/8)/8)%8;
d2=(((n/8)/8)/8)%8;
d1=((((n/8)/8)/8)/8)%8;
printf ("In octal, your number is: %d%d%d%d%d", d1,d2,d3,d4,d5);
return 0;
} //Chương trình không chạy được vì mỗi %ld lấy một số nguyên không phải một chữ số.
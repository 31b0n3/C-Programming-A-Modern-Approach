#include<stdio.h>
int main(void)
{
int d1,d2,d3;
printf("Enter a two-digit number: ");
scanf("%ld%ld%ld", &d1,&d2,&d3);
printf("The reversal is: %d%d%d",d3, d2,d1);
return 0;
} //Chương trình không chạy được vì mỗi %ld lấy một số nguyên không phải một chữ số. 
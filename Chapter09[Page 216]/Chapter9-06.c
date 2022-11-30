#include<stdio.h>
int result_(int x)
{
    return x*(x*(x*(x*(x*(3)+2)-5)-1)+7)-6;
}
int main()
{
    int x;
    printf("x = ");
    scanf("%d",&x);
    printf("%d",result_(x));
}

#include <limits.h>
#include<stdio.h>

short factorial1(short n) {
    if (n == 1) return 1;
    return n * factorial1(n - 1);
}
int factorial2(int n) {
    if (n == 1) return 1;
    return n * factorial2(n - 1);
}
long factorial3(long n) {
    if (n == 1) return 1;
    return n * factorial3(n - 1);
}
long long factorial4(long long n) {
    if (n == 1) return 1;
    return n * factorial4(n - 1);
}
float factorial5(float n) {
    if (n == 1) return 1;
    return n * factorial5(n - 1);
}
double factorial6(double n) {
    if (n == 1) return 1;
    return n * factorial6(n - 1);
}
long double factorial7(long double n) {
    if (n == 1) return 1;
    return n * factorial7(n - 1);
}
int main() {
    int e,n;
    printf(             "1 = use type short.\n"
                        "2 = use type int.\n"
                        "3 = use type long.\n"
                        "4 = use type long long.\n"
                        "5 = use type float.\n"
                        "6 = use type double.\n"
                        "7 = use type long double.\n");
    printf("Enter type (1-7) : ");
    scanf("%d",&e);
    
        if (e == 1)
        {
        short n;}
        if (e == 2)
        {
        int n;}
        if (e == 3)
        {long n;}
        if (e == 4)
        {long long n;}
        if (e == 5)
        {float n;}
        if (e == 6)
        {double n;}
        if (e == 7)
        {long double n;}
    
    switch (e)
    {
        case 1:
        printf("Enter n: ");
        scanf("%d", &n);
        if (SHRT_MAX < factorial1(n) )
        printf ("Overflowing");
        else
        printf ("%d",factorial1(n));
        break; 
        case 2:
        printf("Enter n: ");
        scanf("%d", &n);
        if (INT_MAX < factorial2(n) )
        printf ("Overflowing");
        else
        printf ("%d",factorial2(n));
        break;
        case 3:
        printf("Enter n: ");
        scanf("%d", &n);
        if (LONG_MAX < factorial3(n) )
        printf ("Overflowing");
        else
        printf ("%ld",factorial3(n));
        break;
        case 4:
        printf("Enter n: ");
        scanf("%d", &n);
        if (LLONG_MAX < factorial4(n) )
        printf ("Overflowing");
        else
        printf ("%ld",factorial4(n));
        break;
        case 5:
        printf("Enter n: ");
        scanf("%d", &n);
        printf ("%f",factorial5(n));
        break;
        case 6:
        printf("Enter n: ");
        scanf("%d", &n);
        printf ("%lf",factorial6(n));
        break;
        case 7:
        printf("Enter n: ");
        scanf("%d", &n);
        printf ("%lf",factorial7(n));
        break;
        
    }
    return 0;
}
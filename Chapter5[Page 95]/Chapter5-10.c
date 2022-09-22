#include<stdio.h>
int main(void)
{
int number;
printf ("Enter numerical grade: ");
scanf ("%d",&number);
if (number>=0&&number<=100)
{
    switch (number/10)
    {
    case 10:
    case 9:
        printf("Letter grade: A");
        break;
    case 8:
        printf("Letter grade: B");
        break;
    case 7:
        printf("Letter grade: C");
        break; 
    case 6:
        printf("Letter grade: D");
        break;       
    default:
        printf("Letter grade: F");
        break;
    }
}
else
{
    printf ("Numerical grade is not valid");
}
return 0; 
}



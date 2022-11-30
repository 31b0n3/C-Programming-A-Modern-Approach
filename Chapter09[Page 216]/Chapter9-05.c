#include <stdio.h>
 #include<stdlib.h>
void create_magic_square(int n, int a[99][99])
{
int m=0,l=n/2,d=1;
a[m][l]=d;
for(int i = 0; i<(n*n)-1;i++)
{
    
    if (m-1<0&&l+1<=n-1)
    {
        if(a[n-1][l+1]==0)
        {
        m = n-1;
        l++;
        a[m][l]=++d;
        goto next;
        }
        else
        {
        m++;
        a[m][l]=++d;
        goto next;
        }
    }
    if(l+1>n-1&&m-1>=0)
    {
        if(a[m-1][0]==0)
        {
        l=0;
        m--;
        a[m][l]=++d;
        goto next;
        }
        else
        {
        if(m+1>n-1)
        {
            m=0;
            a[m][l]=++d;
            goto next;
        }
        else
        {
            m++;
            a[m][l]=++d;
            goto next;
        }

        }
    }
    if(l+1>n-1&&m-1<0)
    {
        if(a[n-1][0]==0)
        {
        m=n-1;
        l=0;
        a[m][l]=++d;
        goto next;
        }
        else
        {
        m++;
        a[m][l]=++d;
        goto next;
        }
    }
    if(m-1>=0&&l+1<=n-1)
    {
        if(a[m-1][l+1]==0)
        {
            m--;
            l++;
            a[m][l]=++d;
            goto next;
        }
        else
        {
            if(m+1>n-1)
        {
            m=0;
            a[m][l]=++d;
            goto next;
        }
        else
        {
            m++;
            a[m][l]=++d;
            goto next;
        }
        }
    }
    next: ;
    
}
return;
}
void print_magic_square(int n, int a[99][99])
{
for(int i=0;i<n;i++)
{
    for(int j =0;j<n;j++)
        printf("%2d    ",a[i][j]);
printf("\n");
} 
}
int main() {
int n;
int a[99][99]={0};
printf("This program creates a magic square of a specified size.\n");
printf("The size must be an odd number between 1 and 99.\n");
printf("Enter size of magic square: ");
scanf("%d",&n);
create_magic_square(n,a);
print_magic_square(n,a);

  return 0;
}
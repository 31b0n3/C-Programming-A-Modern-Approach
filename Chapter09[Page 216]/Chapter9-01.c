#include<stdio.h>
int selection_sort(int a[],int n)
{
    if(n<1)
    return;
    int max= -1;
    int b;
    for(int i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            b = i;
            max = a[i];
        }
    }
    a[b]=a[n-1];
    a[n-1]=max;
    selection_sort(a,n-1);

}

int main()
{
int n;

printf("Enter n: ");
scanf("%d",&n);
int a[n];
printf("Enter %d numbers: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(a,n);
   for(int i = 0; i < n; i++)
   {
    printf("%d ",a[i]);
   }

}
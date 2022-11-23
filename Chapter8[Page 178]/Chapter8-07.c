#include <stdio.h>
int main(void)
{
int array[5][5],rowt[5]={0},colt[5]={0};
for (int i = 0; i<5;i++)
{
    printf("Enter row %d: ",i+1);
    for (int j = 0; j<5; j++)
    {
        scanf("%d",&array[i][j]);
    }
}
for (int i = 0; i<5;i++)
    for(int j = 0; j<5;j++)
    {
        rowt[i] += array[i][j];
    }
for(int j = 0; j<5;j++)
    for (int i = 0; i<5;i++)   
    {
        colt[j] += array[i][j];
    }
printf("Row totals: ");
for (int i = 0; i<5;i++)
{
    printf("%d ",rowt[i]);
}
printf("\nColumn totals: ");
for (int i = 0; i<5;i++)
{
    printf("%d ",colt[i]);
}
return 0;
} 
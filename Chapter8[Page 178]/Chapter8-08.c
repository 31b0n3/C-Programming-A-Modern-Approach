#include <stdio.h>
int main(void)
{
int array[5][5],totals[5]={0},high[5]={0} ,low[5]={0};
double average[5]={0};
for (int i = 0; i<5;i++)
{
    printf("Enter student %d score's: ",i+1);
    for (int j = 0; j<5; j++)
    {
        scanf("%d",&array[i][j]);
    }
}
for (int i = 0; i<5;i++)
    for(int j = 0; j<5;j++)
    {
        totals[i] += array[i][j];
    }
for(int j = 0; j<5;j++)
{
    for (int i = 0; i<5;i++)   
    {
        average[j] += array[i][j];
    }
    average[j] /= 5;
}
for(int j = 0; j<5;j++)
{
    
        high[j]=array[0][j];
        low[j]=array[0][j];
}
for(int j = 0; j<5;j++)
    for (int i = 0; i<5;i++)   
    {
        if (array[i][j]>high[j])
        {
            high[j]=array[i][j];
        }
        if (array[i][j]<low[j])
        {
            low[j]=array[i][j];
        }
    }
printf ("Total score for each student: ");
for(int i = 0; i< 5; i++)
{
    printf("%d ", totals[i]);
}
printf ("\nAverage score for each student: ");
for(int i = 0; i< 5; i++)
{
    printf("%.1lf ", totals[i]/5.0);
}
printf ("\nAverage score for each quiz: ");
for(int i = 0; i< 5; i++)
{
    printf("%.1lf ", average[i]);
}
printf ("\nHigh score for each quiz: ");
for(int i = 0; i< 5; i++)
{
    printf("%d ", high[i]);
}
printf ("\nLow score for each quiz: ");
for(int i = 0; i< 5; i++)
{
    printf("%d ", low[i]);
}
return 0;
} 
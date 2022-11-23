#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
char array[10][10];
int direction, a=0, b=0, count=0,l=0;
int df[4]={4,4,4,4};
srand((int) time(NULL));
for (int i = 0; i< 10; i++)
{
    for(int j = 0; j< 10;j++) 
    {
        array[i][j] ='.';  
    }
}
array[a][b] = 'A';
for (int i=1; i<=25; i++)
{
rda:
if(count == 4)
{
for(int i = 0; i<10;i++)
{
    for (int j = 0; j<10; j++)
    {
        printf("%c   ",array[i][j]);
    }
    printf("\n");
}
exit(0);
}
direction = rand() % 4;
if (direction==df[0]||direction==df[1]||direction==df[2]||direction==df[3])
goto rda;
switch(direction) 
{
    case 0:
    if (array[a-1][b]!= '.'||a-1<0)
    {
    count++;
    df[l++]=direction;
    goto rda;
    }
    else
    {
        a--;
        array[a][b]= 'A' + i;
        count = 0;
        df[0]=4;
        df[1]=4;
        df[2]=4;
        df[3]=4;
        l=0;
    }
    break;
    case 1:
    if (array[a+1][b]!= '.'||a+1>9)
    {
    count++;
    df[l++]=direction;
    goto rda;
    }
    else
    {
        a++;
        array[a][b]= 'A' + i;
        count = 0;
        df[0]=4;
        df[1]=4;
        df[2]=4;
        df[3]=4;
        l=0;
    }
    break;
    case 2:
    if (array[a][b-1]!= '.'||b-1<0)
    {
    count++;
    df[l++]=direction;
    goto rda;
    }
    else
    {
        b--;
        array[a][b]= 'A' + i;
        count = 0;
        df[0]=4;
        df[1]=4;
        df[2]=4;
        df[3]=4;
        l=0;
    }
    break;
    case 3:
    if (array[a][b+1]!= '.'||b+1>9)
    {
    count++;
    df[l++]=direction;
    goto rda;
    }
        b++;
        array[a][b]= 'A' + i;
        count = 0;
        df[0]=4;
        df[1]=4;
        df[2]=4;
        df[3]=4;
        l=0;
    break;
}

}
for(int i = 0; i<10;i++)
{
    for (int j = 0; j<10; j++)
    {
        printf("%c   ",array[i][j]);
    }
    printf("\n");
}
return 0;
}
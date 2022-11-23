#include <stdio.h>
int main(void)
{
char B1FF[100];
printf("Enter message: ");
for (int i=0;i<100;i++)
{
    scanf("%c",&B1FF[i]);
    if(B1FF[i] == '\n')
    {
        break;
    }
}
printf("In B1FF-speak: ");
for(int i=0;B1FF[i] != '\n';i++)
{
    if (B1FF[i]>='a'&&B1FF[i]<='z')
    {
        B1FF[i] -= 32; 
    }
    switch (B1FF[i])
    {
    case 'I':
    B1FF[i] = '1';
        break;
    case 'E':
    B1FF[i] = '3';
        break;
    case 'A':
    B1FF[i] = '4';
        break;
    case 'S':
    B1FF[i] = '5';
        break;
    case 'B':
    B1FF[i] = '8';
        break;
    case 'O':
    B1FF[i] = '0';
        break;
    }
printf("%c",B1FF[i]);
}
printf("!!!!!!!!!!");
return 0;
} 
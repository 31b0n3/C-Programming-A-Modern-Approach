 #include <stdio.h>
int main() {
char a[1000];
char e;
int b,j;
printf("Enter a sentence: ");
for (int i=0;;i++)
{
    scanf("%c",&a[i]);
    if (a[i]=='.'||a[i]=='?'||a[i]=='!')
    {
        e = a[i];
        b = i;
        goto n;
    }
}
n:
printf("Reversal of sentence: ");
for (int i = b-1;i>=0;i--)
{
    if(a[i]== ' ')
    {
        j = i;
        for(;;)
        {
            j++;
            if(a[j]==' '||a[j]=='.'||a[j]=='!'||a[j]=='?')
            {
            printf(" ");
            goto w;
            }
            printf("%c",a[j]);
        } 
    }
    else if(i==0)
    {
       j = i;
        for(;;)
        {
            
            printf("%c",a[j]);
            j++;
            if(a[j]==' '||a[j]=='.'||a[j]=='!'||a[j]=='?')
            {
            goto w;
            }
        }  
    }
    w: ;
}
printf("%c",e);
  return 0;
}
 #include <stdio.h>
int main() {
char a[1000],*p,*j;
p = a;
char e;
int b;
printf("Enter a sentence: ");
for (int i=0;;i++)
{
    e = getchar();
    if (e=='.'||e=='?'||e =='!')
    {
        b = i;
        *p = e;
        goto n;
    }
    *p = e;
    p++;
}
n:
printf("Reversal of sentence: ");
for (char *i = p;i >= a;i--)
{
    if(*i == ' ')
    {
        j = i;
        for(;;)
        {
            j++;
            if(*j==' '||*j=='.'||*j=='!'||*j=='?')
            {
            printf(" ");
            goto w;
            }
            printf("%c",*j);
        } 
    }
    else if(i==a)
    {
       j = i;
        for(;;)
        {
            
            printf("%c",*j);
            j++;
            if(*j==' '||*j=='.'||*j=='!'||*j=='?')
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
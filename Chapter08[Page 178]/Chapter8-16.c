 #include <stdio.h>
 #include<stdlib.h>
int main() {
char a[128]={0};
int b,n=0;
printf("Enter first word: ");
for (int i=0;;i++)
{
    scanf("%c",&b);
    a[b]++;
    if(b =='\n')
    {
        goto next;
    }
}
next:

printf("Enter second word: ");
for (int i=0;;i++)
{
    scanf("%c",&b);
    a[b]--;
    if(b=='\n')
    {
        goto nn;
    }
}
nn:
for(int i=0;i<128;i++)
{
    if(a[i]!=0)
    {
        printf("The words are not anagrams.");
        exit(0);
    }
}
printf("The words are anagrams.");
  return 0;
}
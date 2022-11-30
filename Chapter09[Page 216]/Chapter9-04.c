 #include <stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
void read_word(int a[256])
{
char b;
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
    return;
}
bool equal_array(int a[256], int c[256])
{
    
    for(int i=0;i<256;i++)
{
    if(a[i]!=c[i])
    {
        return false;
        break;
    }
    
    
}
return true;
}
int main() {
int a[256]={0};
int c[256]={0};
printf("Enter first word: ");
read_word(a);
printf("Enter second word: ");
read_word(c);
bool n = equal_array(a,c);
if(n)
{
    printf("The words are anagrams.");
}
else
{
printf("The words are not anagrams.");
}
  return 0;
}
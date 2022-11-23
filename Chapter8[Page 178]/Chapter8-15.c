 #include <stdio.h>
int main() {
char a[100];
int n,b;
printf("Enter message to be encrypted: ");
for (int i=0;;i++)
{
    scanf("%c",&a[i]);
    if(a[i]=='\n')
    {
        b=i;
        goto next;
    }
}
next:
printf("Enter shift amount (1-25): ");
scanf("%d",&n);
printf("Encrypted message: ");
for (int i = 0; i<b;i++)
{
    if ('A'<=a[i]&&a[i]<='Z')
    {
      a[i] = ((a[i] - 'A') + n) % 26 + 'A'  ;
    }
        if ('a'<=a[i]&&a[i]<='z')
    {
      a[i] = ((a[i] - 'a') + n) % 26 + 'a'  ;
    }
}
for(int i = 0; i<b;i++)
{
    printf("%c",a[i]);
}
  return 0;
}
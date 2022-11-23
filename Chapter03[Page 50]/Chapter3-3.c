#include<stdio.h>
int main(void)
{
int group1,group2,group3,group4,group5;
printf("Enter ISBN: ");
scanf("%d-%d-%d-%d-%d",&group1,&group2,&group3,&group4,&group5);
printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",group1,group2,group3,group4,group5);
return 0;
}
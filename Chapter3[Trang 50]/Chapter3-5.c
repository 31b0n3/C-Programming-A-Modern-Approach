#include<stdio.h>
int main(void)
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
printf("Enter the numbers from 1 to 16 in any order: ");
scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);
printf("%2d  %2d  %2d  %2d\n",n1,n2,n3,n4);
printf("%2d  %2d  %2d  %2d\n",n5,n6,n7,n8);
printf("%2d  %2d  %2d  %2d\n",n9,n10,n11,n12);
printf("%2d  %2d  %2d  %2d\n",n13,n14,n15,n16);

int R1=n1+n2+n3+n4, R2= n5+n6+n7+n8, R3= n9+n10+n11+n12, R4=n13+n14+n15+n16;
int C1=n1+n5+n9+n13,C2=n2+n6+n10+n14,C3=n3+n7+n11+n15,C4=n4+n8+n12+n16;
int D1=n1+n6+n11+n16,D2=n4+n7+n10+n13;
printf("Row sums: %d %d %d %d\n",R1,R2,R3,R4);
printf("Column sums: %d %d %d %d\n", C1,C2,C3,C4);
printf("Diagonal sum: %d %d\n",D1,D2 );
return 0;
}

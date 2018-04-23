#include <stdio.h>
int main()
{
int a[4][3], b[3][4], c[4][4];
int i,j,k;
printf("Input the Boolean Product of A:\n");
for(i=0;i<4;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("\nInput the Boolean Product of B:\n");
for(i=0;i<3;i++)
for(j=0;j<4;j++)
scanf("%d",&b[i][j]);
for(i=0;i<4;i++)
for(j=0;j<4;j++)
for(k=0;k<3;k++)
{
c[i][j]=1;
if(a[i][k]*b[k][j]==1) break;
else c[i][j]=0;
}
printf("\nThe Boolean Product of A and B is:\n");
for(i=0;i<4;i++)
{
printf("\n");
for(j=0;j<4;j++)
printf("%4d",c[i][j]);
}
printf("\n");
}

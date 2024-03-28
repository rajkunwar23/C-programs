#include <stdio.h>
void main()
{
int a[3][4],i,j;
int b[3][4];

for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("\n enter the matrix elements:=");
scanf("%d",&a[i][j]);
}
}

printf("\n original matrix A is:=\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
b[j][i]=a[i][j];
}
}

printf("\n transpose of matrix A is:=\n");
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}

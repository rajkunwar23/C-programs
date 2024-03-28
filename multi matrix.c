#include<stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
int i,j,k;

printf("\n enter the elements for matrix a:=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("\n enter the elements for matrix b:=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n matrix a is:=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

 printf("\n matrix b is:=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}


printf("\n multiplication of matrix a and b:=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}


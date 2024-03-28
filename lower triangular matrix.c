#include<stdio.h>
void main()
{
int a[3][4];
int i,j;

for(i=0;i<3;++i)
{
for(j=0;j<4;++j)
{
printf("\n enter the matrix elements:=");
scanf("%d",&a[i][j]);
}
}

for(i=0;i<3;++i)
{
for(j=0;j<4;++j)
{
    if(i==j)
    {
    a[i][j]=1;
    }
}
}

printf("\n diagonal matrix:=\n");
for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}

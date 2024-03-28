#include <stdio.h>

void square(int arr[])
{
int i;
int sq;

for(i=0;i<10;i++)
{
sq=arr[i]*arr[i];
printf("\n square of the array element:=%d",sq);
}
}

void square(int arr[]);

void main()
{
int arr[10];
int i;

printf("\n enter the array elements=");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}

square(arr);

return 0;
}

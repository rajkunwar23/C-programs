#include <stdio.h>

int main()
{
int arr[5]={1,2,3,4,5};
int *p;
int i;

priintf("\n array before replacement:=");
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
printf("\n");
*p=&arr[4];
*p=6;

printf("\n array after replacement:=");
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
printf("\n");
return 0;
}

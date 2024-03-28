#include <stdio.h>
#define MAX 100
void main()
{
int size,a[MAX];
int index;
int position,element;

printf("enter the size of an array:=");
scanf("%d",&size);

printf("\n enter the %d elements of array:=",size);
for(index=0;index<size;index++)
{
scanf("%d",&a[index]);
}
printf("\n enter the position for deletion of the element:=");
scanf("%d",&position);

if(position<size&&position>=0)
{
puts("\n valid position");
for(index=position;index<size;index++)
{
a[index]=a[index+1];
}
size--;

printf("\n array after insertion:=\n");
for(index=0;index<size;index++)
{
printf("%d\n",a[index]);
}
}

else
{
puts("\n non valid position");
}
}

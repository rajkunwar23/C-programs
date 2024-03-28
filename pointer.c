#include <stdio.h>
void main()
{
int a[5]={5,10,15,20,25};
int i=0;
for(i=0;i<5;i++)
{
printf("\nvalue of a[%d]=%d",i,a[i]);
printf("\n adress of a[%d]=%d",i,&a[i]);
}
}

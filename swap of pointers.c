#include <stdio.h>
void swap1(int num1,int num2)
{
int temp;
temp=num1;
num1=num2;
num2=temp;
}

void swap2(int *num1,int *num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;
}

void main()
{
int num1,num2;

printf("\n num1=");
scanf("%d",&num1);

printf("\n num2=");
scanf("%d",&num2);

swap1(num1,num2);
printf("\n values after function execuion=%d\t%d",num1,num2);

swap2(&num1,&num2);
printf("\n values after swapping=%d\t%d",num1,num2);
}

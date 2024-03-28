#include <stdio.h>

int sum(int num);

int main()
{
int num;
int result;

printf("\n enter the number:=");
scanf("%d",&num);

result=sum(num);
printf("\n sum of the entered number is:=%d",result);
}

int sum(int num)
{

if(num!=0)
{
return(num%10+sum(num/10));
}
else
{
return 0;
}
}

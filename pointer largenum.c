#include <stdio.h>

int large(int *num1,int *num2)
{
if(*num1>*num2)
{
return *num1;
}
else
{
return *num2;
}
}

int main()
{
int num1,num2;
int result;

printf("\n enter the num1:=");
scanf("%d",&num1);

printf("\n enter the num2:=");
scanf("%d",&num2);

result=large(&num1,&num2);
printf("\n large num:=%d",result);

return 0;
}

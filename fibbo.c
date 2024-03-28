#include <stdio.h>

int fibbo(int num);

int main()
{
int num;
int result;

printf("\n enter the nth term of the fibbonaci series:=");
scanf("%d",&num);

result=fibbo(num);
printf("nth term is=%d",result);
}

int fibbo(int num)
{

if(num==0)
{
return 0;
}
else if(num==1)
{
return 1;
}
else
{
return (fibbo(num-1)+fibbo(num-2));
}
}

#include <stdio.h>

int oddsum(int n)
{
int sum=0;
int i;

printf("odd numbers are:=");

for(i=1;i<=10;i++)
{
    printf("%d\t",2*i-1);
sum+=2*i-1;
}
printf("\n sum of the odd numbers:=%d",sum);
}

int main()
{
int n;

printf("\n enter the number:=");
scanf("%d",&n);

oddsum(n);

return 0;
}

#include <stdio.h>

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
return fibbo(num-1)+fibbo(num-2);
}
}

int main()
{
int num;
int i;

printf("\n enter the num for fibbonacci series:=");
scanf("%d",&num);

for(i=0;i<num;i++)
{
    printf("%d\t",fibbo(i));
}

}

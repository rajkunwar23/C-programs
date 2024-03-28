#include <stdio.h>
int limit(int age);
int main()
{
int age;
int output;
printf("\n enter the age:=");
scanf("%d",&age);

output=limit(age);
if(output==1)
{
printf("\n age is within the limit");
}
else if(output==0)
{
printf("\n age is not within the limit");
}
}

int limit(int age)
{
if(age>=0 && age<=125)
{
return 1;
}
else
{
return 0;
}
}

#include <stdio.h>
#include <math.h>

int sumcalculate(int a[])
{
int i;
int sum=0;

for(i=0;i<10;i++)
{
sum+=a[i];
}
return sum;
}

float averagecalculation(int a[])
{
int sum;
sum=sumcalculate(a);
return (float)sum/10;
}

int main()
{
int a[10];
int i;
int sum;
float average;

printf("\n enter the marks :=");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

sum=sumcalculate(a);
printf("\n sum of all the marks :=%d",sum);

average=averagecalculation(a);
printf("\n average of all the marks:=%2f",average);
return 0;
}

#include <stdio.h>
void main()
{
int a[5];
int i;
int even[5],odd[5];
int evencount=0,oddcount=0;

printf("\n enter the array elements:=");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
    if(a[i]%2==0)
    {
        even[evencount]=a[i];
        evencount++;
    }
    else
    {
        odd[oddcount]=a[i];
        oddcount++;
    }
}

printf("\n even array:=");
for(i=0;i<evencount;i++)
{
    printf("%d\t",even[i]);
}

printf("\n odd array:=");
for(i=0;i<oddcount;i++)
{
    printf("%d\t",odd[i]);
}
}

#include <stdio.h>

char check(char alpha);
int main()
{
char alpha;
int output;

printf("\n enter an alphabet:=");
scanf("%c",&alpha);

output=check(alpha);

if(output==1)
{
printf("\n alphabet");
}
else if(output==0)
{
printf("\n not an alphabet");
}
}


char check(char alpha)
{

for((alpha>=65&&alpha<=90)(alpha>96&&alpha<123))
{
printf("")
}

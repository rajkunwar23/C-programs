#include <stdio.h>

int stringlength(char text[]);

void main()
{
char text[20];
int len;

printf("\n enter the string:=");
gets(text);

len=stringlength(text);
printf("\n string length is=");
printf("%d",len);
}

int stringlength(char text[])
{
int len;

len=strlen(text);

return len;
}

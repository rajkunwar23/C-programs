#include <stdio.h>
#include <string.h>
void main()
{
char text1[20];
char text2[20];
int len1,len2;

printf("\n enter the string1:=");
gets(text1);

printf("\n enter the sring2:=");
gets(text2);

len1=strlen(text1);
printf("\n string1 length is=%d",len1);
len2=strlen(text2);
printf("\n string2 length is =%d",len2);
}

#include <stdio.h>
void main()
{
char s1[20];
char s2[20];

printf("\n enter the first string=");
gets(s1);
printf("\n enter the second string=");
gets(s2);

printf("\n first string:=%s",s1);
printf("\n second string:=%s",s2);

strcmp(s1,s2);
if(s1==s2)
{
    printf("\n strings are same");
}
else
{
    printf("\n srings are not same");
}
}

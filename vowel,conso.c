#include <stdio.h>

void main()
{
char text[20];
int i;
int vowels=0,consonants=0;

printf("\n enter the string:=");
gets(text);

for(i=0;text[i];++i)
{
    if((text[i]>=65&&text[i]<=90)||(text[i]>=97&&text[i]<=122))
    {
     if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
     {
         vowels++;
     }
     else
     {
         consonants++;
     }
    }
}

printf("vowels=%d\n",vowels);
printf("consonants=%d",consonants);
}


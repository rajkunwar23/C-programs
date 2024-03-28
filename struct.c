#include <stdio.h>

struct books
{
char Bname[20];
char bauthor[20];
int bprice;
};

void main()
{
struct books b[5];
int i;

for(i=0;i<5;i++)
{
printf("\n enter the book name:=");
scanf("%s",&b[i].Bname);

printf("\n enter the author name:=");
scanf("%s", &b[i].bauthor);

printf("\n enter the price:=");
scanf("%d", &b[i].bprice);

printf("\n name of the book:=%s",b[i].Bname);
printf("\n name of the author:=%s",b[i].bauthor);
printf("\n price of the book:=%d",b[i].bprice);
}
}

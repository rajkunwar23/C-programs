#include <stdio.h>

int fact(int num)
{
 if(num==0||num==1)
 {
 return 1;
 }
 else
 {
 return num*fact(num-1);
 }
 }

 int main()
 {
 int num;
 int result;

 printf("\n enter the num:=");
 scanf("%d",&num);

 result=fact(num);
 printf("\nfact of %d is=%d",num,result);
 }

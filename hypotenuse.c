#include <stdio.h>

int hypotenuse(int side1,int side2);

int main()
{
int side1,side2;
float hypo;

printf("\n enter the side1:=");
scanf("%d",&side1);

printf("\n enter the side2:=");
scanf("%d",&side2);

hypo=hypotenuse(side1,side2);
printf("\n hypotenuse:=%2f",hypo);
}


int hypotenuse(int side1,int side2)
{
float hypo;

hypo=sqrt(side1*side1+side2*side2);
return hypo;
}



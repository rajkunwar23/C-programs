#include <stdio.h>

int armstrong(int orgnum)
{
    int sum=0;
    int power;
    int remainder=0;
    int num=orgnum;
    while(num!=0)
    {
        remainder=num%10;
        power=remainder*remainder*remainder;
        sum=sum+power;
        num=num/10;
    }

    if(sum==orgnum)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    printf("\n enter the number:=");
    scanf("%d",&num);

    if(armstrong(num)==0)
    {
        printf("%d is armstrong",num);
    }
    else if(armstrong(num)==1)
    {
        printf("\n %d is not armstrong",num);
    }


}

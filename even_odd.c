#include <stdio.h>

void even_odd(int arr[])
{
   printf("\n even numbers=");
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\t",arr[i]);
        }

    }
      printf("\n odd numbers=");
      for(int i=0;i<10;i++)
      {
          if(arr[i]%2!=0)
        {
            printf("%d\t",arr[i]);
        }
    }
 printf("\n");
}
void even_odd(int arr[]);

int main()
{
    int arr[10];
    int i;

    printf("\n enter the array elements=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    even_odd(arr);
    return 0;
}


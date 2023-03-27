#include<stdio.h>
int main()
{
    int number,i,j;
    scanf("%d",&number);
    if(number==1)
    {
        printf("I hate it");
    }
    else if(number%2!=0)
    {
        for(i=1;i<number;i++)
        {
 
         if(i%2!=0)
            {
                printf("I hate that ");
            }
            else if(i%2==0)
            {
                printf(" I love that ");
            }
        }
        printf("I hate it");
 
    }
    else if(number%2==0)
        {
        for(i=1;i<number;i++)
        {
 
         if(i%2==0)
            {
                printf("I love that ");
            }
            else if(i%2!=0)
            {
                printf("I hate that ");
            }
        }
        printf("I love it");
 
    }
    return 0;
 
}
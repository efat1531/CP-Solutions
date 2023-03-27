#include<stdio.h>
int main()
{
    int a,b,i,h=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b==1)
        {
            h=1;
        }
    }
    if(h==1)
    {
        printf("HARD");
    }else
    {
        printf("EASY");
    }
}
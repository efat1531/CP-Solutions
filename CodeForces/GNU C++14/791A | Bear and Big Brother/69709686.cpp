#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d %d",&a,&b);
    for(i=0;a<=b;i++)
    {
       a=a*3;
       b=b*2;
    }
    printf("%d",i);
    return 0;
}
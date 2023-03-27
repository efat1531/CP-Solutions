#include<stdio.h>
 
int main()
{
    int a,b,y=0;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        y++;
    }
    printf("%d",y);
    return 0;
}
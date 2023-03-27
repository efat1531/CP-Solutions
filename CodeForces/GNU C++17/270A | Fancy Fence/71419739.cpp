#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    int testcase[t];
    for(j=0;j<t;j++)
    {
        int angle,n;
        scanf("%d",&angle);
        n=(360)%(180-angle);
        if(n==0)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
 
    }
}
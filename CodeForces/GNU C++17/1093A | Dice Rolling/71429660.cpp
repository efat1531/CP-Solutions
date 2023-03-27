#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,count=0;
        scanf("%d",&n);
        if(n%2==0)
        {
            count=n/2;
        }else
        {
            n-=3;
            count++;
            count+=n/2;
        }
            printf("%d\n",count);
    }
 
}